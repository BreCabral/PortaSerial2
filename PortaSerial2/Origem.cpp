#include "MyForm.h"

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	PortaSerial2::MyForm form;
	Application::Run(% form);
}