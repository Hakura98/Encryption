#include "MyForm.h"

using namespace System;
using namespace Windows::Forms;


[STAThreadAttribute]
int main(array <String^> ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EncryptionCLR::MyForm form;
	Application::Run(%form);
	return 0;
}