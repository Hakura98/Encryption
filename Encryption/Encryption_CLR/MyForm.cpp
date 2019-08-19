#include "MyForm.h"

using namespace System::Windows::Forms;


[System::STAThreadAttribute]
int main(array <System::String^> ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EncryptionCLR::MyForm form;
	Application::Run(%form);
	return 0;
}