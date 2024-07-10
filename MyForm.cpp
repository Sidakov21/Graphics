#include "MyForm.h" //Здесь пишем имя h-файла вашей формы!

using namespace МатГрафики; //Здесь пишем имя вашего проекта!
[STAThreadAttribute]
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm()); //Тоже пишем имя своей формы, если оно не MyForm
	return 0;
}
