#include "MyForm.h" //����� ����� ��� h-����� ����� �����!

using namespace ����������; //����� ����� ��� ������ �������!
[STAThreadAttribute]
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm()); //���� ����� ��� ����� �����, ���� ��� �� MyForm
	return 0;
}