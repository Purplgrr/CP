#include "pch.h"
#include "manga_classes.h"
#include "tree_class.h"
#include "hash_table_class.h"
#include "main_interface.h"


using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Form1()); 
	return 0;
}