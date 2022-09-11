#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <type_traits>
#include <vector>
#include "manga_classes.h"

using namespace std;


// ��� ������� �������� ������ ������
// �� ���� ����� - ��� �������� �� ������� - ���� ����������
// ��� ����� �� 1 �� 100 (������� ������������)

// ��� ��� ������� � ���������� �������� �������� � ����� ����
// ������ ������ ���� ������ ��� �� ������������ ����� ������ ������������ ������
template<typename T>
class BTree
{

public:struct node // ���� ������
{
    node* left; // ������� ��������� �� ������ - ������� � ��������
    node* right;
    node* parent;
    node* next; // ��� ����� ��������� �� ����������� ������
    T num; // ���� � �������
    node(T n, node* l = 0, node* r = 0, node* p = 0, node* ne = 0) :num(n), left(l), right(r), parent(p), next(ne) {}
};
private: // ������ ��� ������ ����������� �� ����� �������, ������� ������ ����������� � ��������� � ���� ����� �������� �� �������

    node* root; // ������ ������


    void insert(node* z, vector<int>* path) // ������� � ������, �������� ��������� ����� ����� � ����� ������� (����� �������� �������)
    {                    // �� �� ����� ��� ������ ������������ ������� � �������� ������
        node* y = NULL;
        node* x = root;
        while (x != NULL)
        {
            path->push_back((int)(*x->num));
            y = x;
            if ((int)(*z->num) < (int)(*x->num))
                x = x->left;
            else if ((int)(*z->num) > (int)(*x->num))
                x = x->right;
            else // ���� ����� ������ ������� � �������� ����� - ������ ��������� ��� � ���� ������� ����� ����
            {
                node* tmp = x;
                while (tmp->next != NULL)
                    tmp = tmp->next;
                tmp->next = z;
                return;
            }
        }
        z->parent = y;
        if (y == NULL)
            root = z;
        else if ((int)(*z->num) < (int)(*y->num))
            y->left = z;
        else if ((int)(*z->num) > (int)(*y->num))
            y->right = z;
        else // �� �� ����� ��� � ���� - ������ ����� �� ���������� ���� ������ � ����� �������
        {
            node* tmp = y;
            while (tmp->next != NULL)
                tmp = tmp->next;
            tmp->next = z;
        }
    }

    //void draw(node* p, int level = 3) { //��������� ������, ������������ �� ���, ������ � ����� ������� ��������� ���� �� ������
    //    if (p != NULL) {
    //        draw(p->right, level + 3);
    //        for (int i = 0; i < level; i++) {
    //            cout << " ";
    //        }
    //        if (p != NULL)
    //        {
    //            node* tmp = p;
    //            while (tmp != NULL)
    //            {
    //                cout << *tmp->num << "<>";
    //                tmp = tmp->next;
    //            }
    //            cout << endl;
    //        }
    //        draw(p->left, level + 3);
    //    }
    //}

    void transplant(node* u, node* v) // ��������������� ����� ��� ������� �������� -- ���� � ����� �������
    {
        if (u->parent == NULL)
            root = v;
        else if (u == u->parent->left)
            u->parent->left = v;
        else u->parent->right = v;
        if (v != NULL)
            v->parent = u->parent;
    }

    node* three_minimum(node* x) // ���� ��� �������� - ���� ���� � �����
    {
        while (x->left != NULL)
            x = x->left;
        return x;
    }
public:
    BTree() {// �����������
        root = NULL;
    }

    vector<int>* additem(T n) { // ������� ��� ���������� ��������
        vector<int>* path{ new vector<int> };
        node* new_node = new node(n);
        insert(new_node, path);
        return path;
    }


    void draw_wrap() // ������� ��� ���������
    {
        node* head = root;
        draw(head);
    }


    private: void draw(node* p, System::Collections::Generic::LinkedList<System::String^>^ res, int level = 3) {
        if (p != NULL) {
            draw(p->right, res, level + 4);
            System::String^ space = "";
            for (int i = 0; i < level; i++) {
                space += " ";
            }
            if (p != NULL)
            {
               node* tmp = p;
               while (tmp != NULL)
               {
                   space += tmp->num->get_all_data_string() + "<>";
                   tmp = tmp->next;
               }
               cout << endl;
            }
            res->AddLast(space);
            draw(p->left, res, level + 4);
        }
    }

    public: auto draw_wrap_return()
    {
        node* head = root;
        auto items{ gcnew System::Collections::Generic::LinkedList<System::String^> };
        draw(head, items);
        return items;
    }

private: void delete_from_three(node* z) // �������� ���� �� �������, � �������� ������� � �����
{
    if (z->left == NULL)
        transplant(z, z->right);
    else if (z->right == NULL)
        transplant(z, z->left);
    else
    {
        node* y = three_minimum(z->right);
        if (y->parent != z)
        {
            transplant(y, y->right);
            y->right = z->right;
            y->right->parent = y;
        }
        transplant(z, y);
        y->left = z->left;
        y->left->parent = y;
    }
}

private: node* search(T data, node* x) // ����� ������� ���� � ������, ����� � ��� ����� ��� ������� ��������� ������
{
    while (x != NULL && ((int)(*data) != (int)(*x->num)))
    {
        if ((int)(*data) < (int)(*x->num))
            x = x->left;
        else x = x->right;
    }
    return x;
}

public: node* search_wrap(T data) // ������� ��� �������� ������
{
    node* x = root;
    return search(data, x);
}

public: bool delete_wrap(T data) // ����� ���������� ��� ��� ���� - ������ ��������
{
    // � ����� ������� ����� ���������� �������� � ������ - ���� ��� ��� - �� ������ �� ����������
    // ���� ������� ����������, �� ��� ��� ���� ��������� ������� ��� �������� 
    node* to_delete = search_wrap(data); // ���� ������� � ����� �� �������� ��� � data
    if (to_delete != NULL) // ���� ������� ����������
    {
        if (to_delete->next == NULL && *to_delete->num == *data) // ���� ������� ������� �� ������ �������� � �� ��������� � ������� ��� ��������
        {
            delete_from_three(to_delete);  // ������� ���
            return true;
        }
        else 
            if (to_delete->next != NULL) // ���� ������� ������� �� > 1 ���������
        {
            if (*to_delete->num == *data)  // ���� ������� ������� ����� ������ � �������
            {
                node* tmp = to_delete;
                if (tmp->parent != NULL) // ���� � ������� ���������� �������� (�� �������� ������)
                {
                    tmp->next->parent = tmp->parent; // ��������������� ����
                    if (tmp->parent->right == tmp)
                        tmp->parent->right = tmp->next;
                    else
                        tmp->parent->left = tmp->next;
                }
                else
                    root = tmp->next;
                if (tmp->left != NULL) // ���� ���������� ����� �������
                {
                    tmp->next->left = tmp->left;  // ��������������� ���� �� ���������
                    tmp->left->parent = tmp->next;
                }
                if (tmp->right != NULL) // ���� ���������� ������ �������
                {
                    tmp->next->right = tmp->right;  // ��������������� ���� �� ���������
                    tmp->right->parent = tmp->next;
                }
                delete tmp; // ������� ������� ������� ����
                return true;
            }
            else // ���� ������� ���� �� ������, �� �������� �� ���� � ������� ����
            {
                node* tmp = to_delete;
                while (tmp != NULL) // ���� ������� � ������� ������� ��������� �����
                {
                    if (*tmp->next->num == *data)
                        break;
                    else
                        tmp = tmp->next;
                }
                if (tmp != NULL) // ���� ������� �� ����� NULL -> ��������� ������� ������ � �������� ��������� �� tmp
                {
                    node* second_tmp = tmp->next; // ������� ���� ������� ��� �� �������� ������������ ������
                    tmp->next = second_tmp->next;
                    delete second_tmp;
                    return true;
                }
                else
                    return false;
            }
        }
        else
            return false;
    }
    else
        return false;
}

public:auto delete_all_same_objects_from_tree(T object) // �������� ���� ���������� �������� - ����������� �����
{
    int counter{};
    while (delete_wrap(object))
    {
        counter++;
    }
    return counter;
}


private: void searchOrderTravers(node* head, string name, vector<T>* res) // ������ ����� (1)
{
    if (head != NULL)
    {
        node* tmp = head;
        while (tmp != NULL)
        {
            if (tmp->num->get_name() == name)
                res->push_back(tmp->num);
            tmp = tmp->next;
        }
        searchOrderTravers(head->left, name, res);
        searchOrderTravers(head->right, name, res);
    }
}

public:  auto searchOrderTraversWrapper(string name)
{
    node* head = root;
    vector<T>* result{ new vector<T> };
    searchOrderTravers(head, name, result);
    return result;
}

      private:void sortOrderTravers(node* head, vector<T>* res) // ����� � ������� � ��������������� ������� (��������������)
      {
          if (head != NULL)
          {
              sortOrderTravers(head->left, res);
              node* tmp = head;
              while (tmp != NULL)
              {
                  res->push_back(tmp->num);
                  tmp = tmp->next;
              }
              sortOrderTravers(head->right, res);
          }
      }


     public: vector<T>*& get_all_items()
      {
          node* head = root;
          vector<T>* items{ new vector<T> };
          sortOrderTravers(head, items);
          return items;
      }
};