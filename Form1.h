#pragma once
#include <iostream>
#include <string>
#include "main_interface.h"
using namespace std;

Interface test;
int log_counter = 0;
int tree_log_counter = 0;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;


	private: System::Windows::Forms::TabPage^ SearchTab;
	private: System::Windows::Forms::GroupBox^ groupBoxResult;


	private: System::Windows::Forms::Button^ GenerateResult;
	private: System::Windows::Forms::NumericUpDown^ InputAgeSearch;

	private: System::Windows::Forms::NumericUpDown^ InputStatusSearch;



	private: System::Windows::Forms::DataGridView^ ResultWindow;






	private: System::Windows::Forms::TabPage^ ContPage;

	private: System::Windows::Forms::GroupBox^ Сleanings;
	private: System::Windows::Forms::Button^ InitData;
	private: System::Windows::Forms::DataGridView^ CleaningWindow;

	private: System::Windows::Forms::GroupBox^ Room_box;
	private: System::Windows::Forms::DataGridView^ MangaWindow;


	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Button^ DeleteFromTreeButton;
	private: System::Windows::Forms::Button^ InsertToTreeButton;
	private: System::Windows::Forms::Button^ DeleteFromHashButton;
	private: System::Windows::Forms::Button^ InsertToHashButton;
	private: System::Windows::Forms::TabPage^ DebugTab;
	private: System::Windows::Forms::GroupBox^ DebugClean;

	private: System::Windows::Forms::DataGridView^ dataGridCleanDebug;

	private: System::Windows::Forms::GroupBox^ DebagRoom;

	private: System::Windows::Forms::DataGridView^ dataGridRoomDebug;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::GroupBox^ LogBox;
	private: System::Windows::Forms::DataGridView^ LogGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;







	public: System::Windows::Forms::TextBox^ FavNameInput;
	private: System::Windows::Forms::NumericUpDown^ mangaAgeInput;
	public:
	private:



















	private: System::Windows::Forms::NumericUpDown^ HashTableSize;
	public: System::Windows::Forms::TextBox^ FavReaderInput;
	private: System::Windows::Forms::NumericUpDown^ FavStatusInput;
	public: System::Windows::Forms::TextBox^ mangaGenreInput;
	private:
	public: System::Windows::Forms::TextBox^ mangaTitleInput;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cleanings;
public:
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rooms;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::DataGridView^ TreeLogBox;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ResTable;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
	public:
	private:

	private:


	public:

	private: System::ComponentModel::IContainer^ components;


	private:

		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SearchTab = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxResult = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GenerateResult = (gcnew System::Windows::Forms::Button());
			this->InputAgeSearch = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputStatusSearch = (gcnew System::Windows::Forms::NumericUpDown());
			this->ResultWindow = (gcnew System::Windows::Forms::DataGridView());
			this->ResTable = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ContPage = (gcnew System::Windows::Forms::TabPage());
			this->Сleanings = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->FavStatusInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->FavReaderInput = (gcnew System::Windows::Forms::TextBox());
			this->DeleteFromTreeButton = (gcnew System::Windows::Forms::Button());
			this->InsertToTreeButton = (gcnew System::Windows::Forms::Button());
			this->FavNameInput = (gcnew System::Windows::Forms::TextBox());
			this->CleaningWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Cleanings = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Room_box = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->mangaGenreInput = (gcnew System::Windows::Forms::TextBox());
			this->MangaWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Rooms = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mangaAgeInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->DeleteFromHashButton = (gcnew System::Windows::Forms::Button());
			this->InsertToHashButton = (gcnew System::Windows::Forms::Button());
			this->mangaTitleInput = (gcnew System::Windows::Forms::TextBox());
			this->HashTableSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->InitData = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DebugTab = (gcnew System::Windows::Forms::TabPage());
			this->LogBox = (gcnew System::Windows::Forms::GroupBox());
			this->LogGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DebagRoom = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridRoomDebug = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TreeLogBox = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DebugClean = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridCleanDebug = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SearchTab->SuspendLayout();
			this->groupBoxResult->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputAgeSearch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputStatusSearch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->BeginInit();
			this->ContPage->SuspendLayout();
			this->Сleanings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FavStatusInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->BeginInit();
			this->Room_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MangaWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mangaAgeInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HashTableSize))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->DebugTab->SuspendLayout();
			this->LogBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogGridView))->BeginInit();
			this->DebagRoom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRoomDebug))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TreeLogBox))->BeginInit();
			this->DebugClean->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCleanDebug))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// SearchTab
			// 
			this->SearchTab->Controls->Add(this->groupBoxResult);
			this->SearchTab->Location = System::Drawing::Point(4, 28);
			this->SearchTab->Margin = System::Windows::Forms::Padding(4);
			this->SearchTab->Name = L"SearchTab";
			this->SearchTab->Padding = System::Windows::Forms::Padding(4);
			this->SearchTab->Size = System::Drawing::Size(1784, 871);
			this->SearchTab->TabIndex = 2;
			this->SearchTab->Text = L"Задача поиска";
			this->SearchTab->UseVisualStyleBackColor = true;
			// 
			// groupBoxResult
			// 
			this->groupBoxResult->BackColor = System::Drawing::Color::Honeydew;
			this->groupBoxResult->Controls->Add(this->label3);
			this->groupBoxResult->Controls->Add(this->label2);
			this->groupBoxResult->Controls->Add(this->label1);
			this->groupBoxResult->Controls->Add(this->GenerateResult);
			this->groupBoxResult->Controls->Add(this->InputAgeSearch);
			this->groupBoxResult->Controls->Add(this->InputStatusSearch);
			this->groupBoxResult->Controls->Add(this->ResultWindow);
			this->groupBoxResult->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxResult->Location = System::Drawing::Point(8, 4);
			this->groupBoxResult->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxResult->Name = L"groupBoxResult";
			this->groupBoxResult->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxResult->Size = System::Drawing::Size(1447, 861);
			this->groupBoxResult->TabIndex = 8;
			this->groupBoxResult->TabStop = false;
			this->groupBoxResult->Text = L"Результат задачи поиска";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Honeydew;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(728, 43);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(434, 123);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введите статус прочтения и \r\nвозрастное ограничение \r\nдля поиска комикса:\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(932, 377);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Age";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(923, 262);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Status";
			// 
			// GenerateResult
			// 
			this->GenerateResult->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GenerateResult->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->GenerateResult->Location = System::Drawing::Point(832, 507);
			this->GenerateResult->Margin = System::Windows::Forms::Padding(4);
			this->GenerateResult->Name = L"GenerateResult";
			this->GenerateResult->Size = System::Drawing::Size(260, 75);
			this->GenerateResult->TabIndex = 3;
			this->GenerateResult->Text = L"Найти";
			this->GenerateResult->UseVisualStyleBackColor = true;
			this->GenerateResult->Click += gcnew System::EventHandler(this, &Form1::GenerateResult_Click);
			// 
			// InputAgeSearch
			// 
			this->InputAgeSearch->BackColor = System::Drawing::Color::White;
			this->InputAgeSearch->Location = System::Drawing::Point(899, 414);
			this->InputAgeSearch->Margin = System::Windows::Forms::Padding(4);
			this->InputAgeSearch->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputAgeSearch->Name = L"InputAgeSearch";
			this->InputAgeSearch->Size = System::Drawing::Size(117, 32);
			this->InputAgeSearch->TabIndex = 4;
			this->InputAgeSearch->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InputStatusSearch
			// 
			this->InputStatusSearch->BackColor = System::Drawing::Color::White;
			this->InputStatusSearch->Location = System::Drawing::Point(899, 300);
			this->InputStatusSearch->Margin = System::Windows::Forms::Padding(4);
			this->InputStatusSearch->Name = L"InputStatusSearch";
			this->InputStatusSearch->Size = System::Drawing::Size(117, 32);
			this->InputStatusSearch->TabIndex = 3;
			// 
			// ResultWindow
			// 
			this->ResultWindow->BackgroundColor = System::Drawing::Color::MintCream;
			this->ResultWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ResTable });
			this->ResultWindow->Location = System::Drawing::Point(23, 43);
			this->ResultWindow->Margin = System::Windows::Forms::Padding(4);
			this->ResultWindow->Name = L"ResultWindow";
			this->ResultWindow->RowHeadersWidth = 51;
			this->ResultWindow->Size = System::Drawing::Size(631, 539);
			this->ResultWindow->TabIndex = 2;
			this->ResultWindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// ResTable
			// 
			this->ResTable->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ResTable->HeaderText = L"Результат";
			this->ResTable->MinimumWidth = 6;
			this->ResTable->Name = L"ResTable";
			// 
			// ContPage
			// 
			this->ContPage->BackColor = System::Drawing::Color::MintCream;
			this->ContPage->Controls->Add(this->Сleanings);
			this->ContPage->Controls->Add(this->Room_box);
			this->ContPage->Location = System::Drawing::Point(4, 28);
			this->ContPage->Margin = System::Windows::Forms::Padding(4);
			this->ContPage->Name = L"ContPage";
			this->ContPage->Padding = System::Windows::Forms::Padding(4);
			this->ContPage->Size = System::Drawing::Size(1784, 871);
			this->ContPage->TabIndex = 0;
			this->ContPage->Text = L"Справочники";
			// 
			// Сleanings
			// 
			this->Сleanings->BackColor = System::Drawing::Color::Honeydew;
			this->Сleanings->Controls->Add(this->label10);
			this->Сleanings->Controls->Add(this->label9);
			this->Сleanings->Controls->Add(this->label8);
			this->Сleanings->Controls->Add(this->FavStatusInput);
			this->Сleanings->Controls->Add(this->FavReaderInput);
			this->Сleanings->Controls->Add(this->DeleteFromTreeButton);
			this->Сleanings->Controls->Add(this->InsertToTreeButton);
			this->Сleanings->Controls->Add(this->FavNameInput);
			this->Сleanings->Controls->Add(this->CleaningWindow);
			this->Сleanings->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Сleanings->Location = System::Drawing::Point(754, 8);
			this->Сleanings->Margin = System::Windows::Forms::Padding(4);
			this->Сleanings->Name = L"Сleanings";
			this->Сleanings->Padding = System::Windows::Forms::Padding(4);
			this->Сleanings->Size = System::Drawing::Size(756, 794);
			this->Сleanings->TabIndex = 6;
			this->Сleanings->TabStop = false;
			this->Сleanings->Text = L"Favourites Tree";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(31, 158);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 24);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Status";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 94);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 24);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Reader";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 33);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 24);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Title";
			// 
			// FavStatusInput
			// 
			this->FavStatusInput->BackColor = System::Drawing::Color::White;
			this->FavStatusInput->Location = System::Drawing::Point(26, 185);
			this->FavStatusInput->Margin = System::Windows::Forms::Padding(4);
			this->FavStatusInput->Name = L"FavStatusInput";
			this->FavStatusInput->Size = System::Drawing::Size(219, 32);
			this->FavStatusInput->TabIndex = 13;
			// 
			// FavReaderInput
			// 
			this->FavReaderInput->Location = System::Drawing::Point(26, 121);
			this->FavReaderInput->Margin = System::Windows::Forms::Padding(4);
			this->FavReaderInput->Name = L"FavReaderInput";
			this->FavReaderInput->Size = System::Drawing::Size(219, 32);
			this->FavReaderInput->TabIndex = 24;
			// 
			// DeleteFromTreeButton
			// 
			this->DeleteFromTreeButton->BackColor = System::Drawing::Color::MistyRose;
			this->DeleteFromTreeButton->ForeColor = System::Drawing::Color::IndianRed;
			this->DeleteFromTreeButton->Location = System::Drawing::Point(518, 106);
			this->DeleteFromTreeButton->Margin = System::Windows::Forms::Padding(4);
			this->DeleteFromTreeButton->Name = L"DeleteFromTreeButton";
			this->DeleteFromTreeButton->Size = System::Drawing::Size(204, 63);
			this->DeleteFromTreeButton->TabIndex = 7;
			this->DeleteFromTreeButton->Text = L"Delete";
			this->DeleteFromTreeButton->UseVisualStyleBackColor = false;
			this->DeleteFromTreeButton->Click += gcnew System::EventHandler(this, &Form1::DeleteFromTreeButton_Click);
			// 
			// InsertToTreeButton
			// 
			this->InsertToTreeButton->BackColor = System::Drawing::Color::AliceBlue;
			this->InsertToTreeButton->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->InsertToTreeButton->Location = System::Drawing::Point(280, 105);
			this->InsertToTreeButton->Margin = System::Windows::Forms::Padding(4);
			this->InsertToTreeButton->Name = L"InsertToTreeButton";
			this->InsertToTreeButton->Size = System::Drawing::Size(204, 70);
			this->InsertToTreeButton->TabIndex = 6;
			this->InsertToTreeButton->Text = L"Insert";
			this->InsertToTreeButton->UseVisualStyleBackColor = false;
			this->InsertToTreeButton->Click += gcnew System::EventHandler(this, &Form1::InsertToTreeButton_Click);
			// 
			// FavNameInput
			// 
			this->FavNameInput->Location = System::Drawing::Point(26, 60);
			this->FavNameInput->Margin = System::Windows::Forms::Padding(4);
			this->FavNameInput->Name = L"FavNameInput";
			this->FavNameInput->Size = System::Drawing::Size(219, 32);
			this->FavNameInput->TabIndex = 17;
			// 
			// CleaningWindow
			// 
			this->CleaningWindow->BackgroundColor = System::Drawing::Color::MintCream;
			this->CleaningWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CleaningWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Cleanings });
			this->CleaningWindow->Location = System::Drawing::Point(26, 259);
			this->CleaningWindow->Margin = System::Windows::Forms::Padding(4);
			this->CleaningWindow->Name = L"CleaningWindow";
			this->CleaningWindow->RowHeadersWidth = 51;
			this->CleaningWindow->Size = System::Drawing::Size(696, 434);
			this->CleaningWindow->TabIndex = 2;
			// 
			// Cleanings
			// 
			this->Cleanings->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Cleanings->HeaderText = L"Favourites";
			this->Cleanings->MinimumWidth = 6;
			this->Cleanings->Name = L"Cleanings";
			this->Cleanings->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Room_box
			// 
			this->Room_box->BackColor = System::Drawing::Color::Honeydew;
			this->Room_box->Controls->Add(this->label7);
			this->Room_box->Controls->Add(this->label6);
			this->Room_box->Controls->Add(this->label5);
			this->Room_box->Controls->Add(this->mangaGenreInput);
			this->Room_box->Controls->Add(this->MangaWindow);
			this->Room_box->Controls->Add(this->mangaAgeInput);
			this->Room_box->Controls->Add(this->DeleteFromHashButton);
			this->Room_box->Controls->Add(this->InsertToHashButton);
			this->Room_box->Controls->Add(this->mangaTitleInput);
			this->Room_box->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Room_box->Location = System::Drawing::Point(8, 7);
			this->Room_box->Margin = System::Windows::Forms::Padding(4);
			this->Room_box->Name = L"Room_box";
			this->Room_box->Padding = System::Windows::Forms::Padding(4);
			this->Room_box->Size = System::Drawing::Size(738, 795);
			this->Room_box->TabIndex = 7;
			this->Room_box->TabStop = false;
			this->Room_box->Text = L"Manga Hash Table";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 159);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 24);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Age restriction";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 95);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 24);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Genre";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 31);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Title";
			// 
			// mangaGenreInput
			// 
			this->mangaGenreInput->Location = System::Drawing::Point(21, 122);
			this->mangaGenreInput->Margin = System::Windows::Forms::Padding(4);
			this->mangaGenreInput->Name = L"mangaGenreInput";
			this->mangaGenreInput->Size = System::Drawing::Size(219, 32);
			this->mangaGenreInput->TabIndex = 26;
			// 
			// MangaWindow
			// 
			this->MangaWindow->BackgroundColor = System::Drawing::Color::MintCream;
			this->MangaWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MangaWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Rooms });
			this->MangaWindow->Location = System::Drawing::Point(21, 260);
			this->MangaWindow->Margin = System::Windows::Forms::Padding(4);
			this->MangaWindow->Name = L"MangaWindow";
			this->MangaWindow->RowHeadersWidth = 51;
			this->MangaWindow->Size = System::Drawing::Size(681, 434);
			this->MangaWindow->TabIndex = 2;
			// 
			// Rooms
			// 
			this->Rooms->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Rooms->HeaderText = L"Manga";
			this->Rooms->MinimumWidth = 6;
			this->Rooms->Name = L"Rooms";
			this->Rooms->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// mangaAgeInput
			// 
			this->mangaAgeInput->BackColor = System::Drawing::Color::White;
			this->mangaAgeInput->Location = System::Drawing::Point(23, 196);
			this->mangaAgeInput->Margin = System::Windows::Forms::Padding(4);
			this->mangaAgeInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			this->mangaAgeInput->Name = L"mangaAgeInput";
			this->mangaAgeInput->Size = System::Drawing::Size(217, 32);
			this->mangaAgeInput->TabIndex = 12;
			// 
			// DeleteFromHashButton
			// 
			this->DeleteFromHashButton->BackColor = System::Drawing::Color::MistyRose;
			this->DeleteFromHashButton->ForeColor = System::Drawing::Color::IndianRed;
			this->DeleteFromHashButton->Location = System::Drawing::Point(502, 107);
			this->DeleteFromHashButton->Margin = System::Windows::Forms::Padding(4);
			this->DeleteFromHashButton->Name = L"DeleteFromHashButton";
			this->DeleteFromHashButton->Size = System::Drawing::Size(200, 69);
			this->DeleteFromHashButton->TabIndex = 4;
			this->DeleteFromHashButton->Text = L"Delete";
			this->DeleteFromHashButton->UseVisualStyleBackColor = false;
			this->DeleteFromHashButton->Click += gcnew System::EventHandler(this, &Form1::DeleteFromHashButton_Click);
			// 
			// InsertToHashButton
			// 
			this->InsertToHashButton->BackColor = System::Drawing::Color::AliceBlue;
			this->InsertToHashButton->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->InsertToHashButton->Location = System::Drawing::Point(270, 107);
			this->InsertToHashButton->Margin = System::Windows::Forms::Padding(4);
			this->InsertToHashButton->Name = L"InsertToHashButton";
			this->InsertToHashButton->Size = System::Drawing::Size(200, 70);
			this->InsertToHashButton->TabIndex = 3;
			this->InsertToHashButton->Text = L"Insert";
			this->InsertToHashButton->UseVisualStyleBackColor = false;
			this->InsertToHashButton->Click += gcnew System::EventHandler(this, &Form1::InsertToHashButton_Click);
			// 
			// mangaTitleInput
			// 
			this->mangaTitleInput->Location = System::Drawing::Point(21, 60);
			this->mangaTitleInput->Margin = System::Windows::Forms::Padding(4);
			this->mangaTitleInput->Name = L"mangaTitleInput";
			this->mangaTitleInput->Size = System::Drawing::Size(219, 32);
			this->mangaTitleInput->TabIndex = 25;
			// 
			// HashTableSize
			// 
			this->HashTableSize->BackColor = System::Drawing::Color::White;
			this->HashTableSize->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HashTableSize->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->HashTableSize->Location = System::Drawing::Point(1071, 165);
			this->HashTableSize->Margin = System::Windows::Forms::Padding(4);
			this->HashTableSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->HashTableSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->HashTableSize->Name = L"HashTableSize";
			this->HashTableSize->Size = System::Drawing::Size(171, 36);
			this->HashTableSize->TabIndex = 22;
			this->HashTableSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InitData
			// 
			this->InitData->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InitData->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->InitData->Location = System::Drawing::Point(1071, 483);
			this->InitData->Margin = System::Windows::Forms::Padding(4);
			this->InitData->Name = L"InitData";
			this->InitData->Size = System::Drawing::Size(171, 71);
			this->InitData->TabIndex = 5;
			this->InitData->Text = L"Ввод данных";
			this->InitData->UseVisualStyleBackColor = true;
			this->InitData->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->ContPage);
			this->tabControl1->Controls->Add(this->SearchTab);
			this->tabControl1->Controls->Add(this->DebugTab);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(27, 15);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1792, 903);
			this->tabControl1->TabIndex = 9;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Honeydew;
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->HashTableSize);
			this->tabPage1->Controls->Add(this->InitData);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1784, 871);
			this->tabPage1->TabIndex = 4;
			this->tabPage1->Text = L"Ввод данных";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label4->Location = System::Drawing::Point(218, 156);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(673, 45);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Введите размер Хэш-таблицы (1 - 1000): \r\n";
			// 
			// DebugTab
			// 
			this->DebugTab->BackColor = System::Drawing::Color::MintCream;
			this->DebugTab->Controls->Add(this->LogBox);
			this->DebugTab->Controls->Add(this->DebagRoom);
			this->DebugTab->Location = System::Drawing::Point(4, 28);
			this->DebugTab->Margin = System::Windows::Forms::Padding(4);
			this->DebugTab->Name = L"DebugTab";
			this->DebugTab->Padding = System::Windows::Forms::Padding(4);
			this->DebugTab->Size = System::Drawing::Size(1784, 871);
			this->DebugTab->TabIndex = 3;
			this->DebugTab->Text = L"Отладка Хэш";
			// 
			// LogBox
			// 
			this->LogBox->BackColor = System::Drawing::Color::Honeydew;
			this->LogBox->Controls->Add(this->LogGridView);
			this->LogBox->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LogBox->Location = System::Drawing::Point(25, 7);
			this->LogBox->Margin = System::Windows::Forms::Padding(4);
			this->LogBox->Name = L"LogBox";
			this->LogBox->Padding = System::Windows::Forms::Padding(4);
			this->LogBox->Size = System::Drawing::Size(1683, 198);
			this->LogBox->TabIndex = 10;
			this->LogBox->TabStop = false;
			this->LogBox->Text = L"Вставка элементов: ключи хэширования";
			// 
			// LogGridView
			// 
			this->LogGridView->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->LogGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->LogGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->LogGridView->Location = System::Drawing::Point(33, 31);
			this->LogGridView->Margin = System::Windows::Forms::Padding(4);
			this->LogGridView->Name = L"LogGridView";
			this->LogGridView->RowHeadersWidth = 51;
			this->LogGridView->Size = System::Drawing::Size(1475, 148);
			this->LogGridView->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Таблица";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// DebagRoom
			// 
			this->DebagRoom->BackColor = System::Drawing::Color::Honeydew;
			this->DebagRoom->Controls->Add(this->dataGridRoomDebug);
			this->DebagRoom->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebagRoom->Location = System::Drawing::Point(25, 213);
			this->DebagRoom->Margin = System::Windows::Forms::Padding(4);
			this->DebagRoom->Name = L"DebagRoom";
			this->DebagRoom->Padding = System::Windows::Forms::Padding(4);
			this->DebagRoom->Size = System::Drawing::Size(1683, 651);
			this->DebagRoom->TabIndex = 8;
			this->DebagRoom->TabStop = false;
			this->DebagRoom->Text = L"Отладочное окно Таблицы";
			// 
			// dataGridRoomDebug
			// 
			this->dataGridRoomDebug->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->dataGridRoomDebug->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridRoomDebug->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dataGridRoomDebug->Location = System::Drawing::Point(33, 31);
			this->dataGridRoomDebug->Margin = System::Windows::Forms::Padding(4);
			this->dataGridRoomDebug->Name = L"dataGridRoomDebug";
			this->dataGridRoomDebug->RowHeadersWidth = 51;
			this->dataGridRoomDebug->Size = System::Drawing::Size(1475, 569);
			this->dataGridRoomDebug->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Таблица";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::MintCream;
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->DebugClean);
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(1784, 871);
			this->tabPage2->TabIndex = 5;
			this->tabPage2->Text = L"Отладка Дерево";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Honeydew;
			this->groupBox1->Controls->Add(this->TreeLogBox);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(25, 16);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1725, 185);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Путь вставки элементов в Дерево";
			// 
			// TreeLogBox
			// 
			this->TreeLogBox->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->TreeLogBox->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TreeLogBox->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn4 });
			this->TreeLogBox->Location = System::Drawing::Point(15, 31);
			this->TreeLogBox->Margin = System::Windows::Forms::Padding(4);
			this->TreeLogBox->Name = L"TreeLogBox";
			this->TreeLogBox->RowHeadersWidth = 51;
			this->TreeLogBox->Size = System::Drawing::Size(1493, 129);
			this->TreeLogBox->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Путь";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// DebugClean
			// 
			this->DebugClean->BackColor = System::Drawing::Color::Honeydew;
			this->DebugClean->Controls->Add(this->dataGridCleanDebug);
			this->DebugClean->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebugClean->Location = System::Drawing::Point(25, 208);
			this->DebugClean->Margin = System::Windows::Forms::Padding(4);
			this->DebugClean->Name = L"DebugClean";
			this->DebugClean->Padding = System::Windows::Forms::Padding(4);
			this->DebugClean->Size = System::Drawing::Size(1725, 714);
			this->DebugClean->TabIndex = 9;
			this->DebugClean->TabStop = false;
			this->DebugClean->Text = L"Отладочное окно БДП";
			// 
			// dataGridCleanDebug
			// 
			this->dataGridCleanDebug->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->dataGridCleanDebug->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCleanDebug->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->dataGridCleanDebug->Location = System::Drawing::Point(15, 31);
			this->dataGridCleanDebug->Margin = System::Windows::Forms::Padding(4);
			this->dataGridCleanDebug->Name = L"dataGridCleanDebug";
			this->dataGridCleanDebug->RowHeadersWidth = 51;
			this->dataGridCleanDebug->Size = System::Drawing::Size(1493, 566);
			this->dataGridCleanDebug->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Отрисовка дерева в положении \"на боку\"";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label11->Location = System::Drawing::Point(363, 334);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(528, 56);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Её размер всегда будет являться простым числом\r\nблизжайшим сверху к введённому.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(221, 334);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(141, 28);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Примечание:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label13->Location = System::Drawing::Point(591, 509);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(300, 45);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Нажмите кнопку:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1577, 896);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Курсовой проект";
			this->SearchTab->ResumeLayout(false);
			this->groupBoxResult->ResumeLayout(false);
			this->groupBoxResult->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputAgeSearch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputStatusSearch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->EndInit();
			this->ContPage->ResumeLayout(false);
			this->Сleanings->ResumeLayout(false);
			this->Сleanings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FavStatusInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->EndInit();
			this->Room_box->ResumeLayout(false);
			this->Room_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MangaWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mangaAgeInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HashTableSize))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->DebugTab->ResumeLayout(false);
			this->LogBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogGridView))->EndInit();
			this->DebagRoom->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRoomDebug))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TreeLogBox))->EndInit();
			this->DebugClean->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCleanDebug))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void print_manga_data_base()
	{
		auto hash_table = test.get_all_hash_table();
		auto table_size = test.get_hash_table_size();

		MangaWindow->ColumnCount = 1;
		MangaWindow->RowCount = table_size;

		auto j = 0;
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::occupied)
			{
				MangaWindow->Rows[j]->Cells[0]->Value = item.data->get_all_data_string();
				++j;
			}
		}
	}

	private: System::Void print_fav_debug_data()
	{
		auto res = test.get_all_tree_for_drawning();

		dataGridCleanDebug->ColumnCount = 1;
		dataGridCleanDebug->RowCount = res->Count;

		auto tmp = res->First;
		for (auto i = 0; i < res->Count; i++)
		{
			dataGridCleanDebug->Rows[i]->Cells[0]->Value = tmp->Value;
			tmp = tmp->Next;
		}
	}

	private: System::Void print_manga_debug_data()
	{
		auto hash_table = test.get_all_hash_table();
		auto table_size = test.get_hash_table_size();

		dataGridRoomDebug->ColumnCount = 1;
		dataGridRoomDebug->RowCount = table_size;

		auto i = 0;
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::free)
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = "Empty";
			else if (item.cell_status == status::deleted)
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = "Del";
			else
			{
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = item.data->get_all_data_string();
			}
			++i;
		}
	}

	private: System::Void print_fav_data_base()
	{
		auto tree = test.get_all_tree_for_debug()->get_all_items();

		CleaningWindow->ColumnCount = 1;
		CleaningWindow->RowCount = tree->size();

		auto i = 0;
		for (auto item : *tree)
		{
			CleaningWindow->Rows[i]->Cells[0]->Value = item->get_all_data_string();
			++i;
		}
	}

	private: System::Void GenerateResult_Click(System::Object^ sender, System::EventArgs^ e) {  // Result button
		if (test.is_bases_inited())
		{

			auto status = Convert::ToInt32(InputStatusSearch->Value);
			auto age = Convert::ToInt32(InputAgeSearch->Value);



			auto res = test.main_search_task(status, age);

			if (res.size() != 0)
			{
				ResultWindow->ColumnCount = 1;
				ResultWindow->RowCount = res.size();

				for (auto i = 0; i < res.size(); ++i)
				{
					ResultWindow->Rows[i]->Cells[0]->Value = res[i]->get_all_data_string();
				}

			}
			else
				MessageBox::Show("Результат отсутствует", "Задача поиска");
		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		auto size = Convert::ToInt32(HashTableSize->Value);
		test.Init_Data_Bases(size); // инициализация баз данных

		// show Cleanings
		print_fav_data_base();
		// show Rooms
		print_manga_data_base();

		print_manga_debug_data();
		print_fav_debug_data();
		LogGridView->ColumnCount = 1; // создание лога на 100 записей
		LogGridView->RowCount = 100;
		MessageBox::Show("Вместимость таблицы: " + test.get_hash_table_size() + " записей", "Создание хэш таблицы");
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void comboType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InsertToHashButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// room input
		if (test.is_bases_inited())
		{
			// получаем данные из формы
			auto title = mangaTitleInput->Text;
			auto genre = mangaGenreInput->Text;
			auto age = Convert::ToInt32(mangaAgeInput->Value);

			// маршализация строки
			std::string tmp_title;
			std::string tmp_genre;
			MarshalString(title, tmp_title);
			MarshalString(genre, tmp_genre);
			tmp_title = tmp_title + " ";
			tmp_genre = tmp_genre + " ";

			auto operation_result = test.insert_element_to_manga_data_base(tmp_title, tmp_genre, age);
			if (operation_result == -1)
				MessageBox::Show("Нельзя добавить! Такие данные уже есть в таблице", "Вставка в хэш таблицу");
			else if (operation_result == -2)
				MessageBox::Show("Хэш таблица переполнена", "Вставка в хэш таблицу");
			else
			{
				print_manga_data_base();
				print_manga_debug_data();
				LogGridView->Rows[log_counter]->Cells[0]->Value = "Ключ(" + title + ") Первичный: "
					+ test.get_string_code(tmp_title) % test.get_hash_table_size() + " Вторичный: " + operation_result;
				log_counter++;
			}
		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}


	private: System::Void MarshalString(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}


	private: System::Void DeleteFromHashButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (test.is_bases_inited())
		{
			// получаем данные из формы
			auto title = mangaTitleInput->Text;
			auto genre = mangaGenreInput->Text;
			auto age = Convert::ToInt32(mangaAgeInput->Value);

			// маршализация строки
			std::string tmp_title;
			std::string tmp_genre;
			MarshalString(title, tmp_title);
			MarshalString(genre, tmp_genre);
			tmp_title = tmp_title + " ";
			tmp_genre = tmp_genre + " ";

			auto operation_result = test.delete_element_from_manga_data_base(tmp_title, tmp_genre, age);
			if (operation_result == -1)
				MessageBox::Show("Элемент отсутсвует", "Удаление из Таблицы");
			else
			{
				// удаление из побочной таблицы
				auto found = test.find_all_elements_by_num(tmp_title);
				if (found->size() != 0)
				{
					MessageBox::Show("Так же будет удалено " + found->size() + " записей из БДП", "Удаление связанных элементов");
					for (auto item : *found)
					{
						test.delete_element_to_fav_data_base(item->get_name(), item->get_reader(), item->get_status());
					}
				}

				print_manga_data_base();
				print_fav_data_base();
				print_fav_debug_data();
				print_manga_debug_data();
			}
		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}
	private: System::Void InsertToTreeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (test.is_bases_inited())
		{
			// получаем данные из формы
			auto name = FavNameInput->Text;
			auto reader = FavReaderInput->Text;
			auto status = Convert::ToInt32(FavStatusInput->Value);

			// маршализация строки
			std::string tmp_name;
			std::string tmp_reader;
			MarshalString(name, tmp_name);
			MarshalString(reader, tmp_reader);
			tmp_name = tmp_name + " ";
			tmp_reader = tmp_reader + " ";
			// добавление 
			auto tree_path = test.insert_element_to_fav_data_base(tmp_name, tmp_reader, status);

			auto full_tree_path = status + ") Путь: ";
			for (auto item : *tree_path)
				full_tree_path += (item + " / ");
			// обновление данных в форме
			print_fav_data_base();
			print_fav_debug_data();
			TreeLogBox->Rows[tree_log_counter]->Cells[0]->Value = full_tree_path;
			tree_log_counter++;
		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}
	private: System::Void DeleteFromTreeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (test.is_bases_inited())
		{
			// получаем данные из формы
			auto name = FavNameInput->Text;
			auto reader = FavReaderInput->Text;
			auto status = Convert::ToInt32(FavStatusInput->Value);

			// маршализация строки
			std::string tmp_name;
			std::string tmp_reader;
			MarshalString(name, tmp_name);
			MarshalString(reader, tmp_reader);
			tmp_name = tmp_name + " ";
			tmp_reader = tmp_reader + " ";

			auto is_element_deleted = test.delete_element_to_fav_data_base(tmp_name, tmp_reader, status);

			if (is_element_deleted)
			{
				// обновление данныхв форме
				print_fav_data_base();
				print_fav_debug_data();
			}
			else
				MessageBox::Show("Элемент остуствует", "Удаление из дерева");
		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}


private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}