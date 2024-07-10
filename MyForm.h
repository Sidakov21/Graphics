#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>"

//using namespace std;

std::string equation = "";

namespace МатГрафики {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьМасштабToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ увеличитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ уменьшитьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox_c;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_b;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_k;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ func;
	private: System::Windows::Forms::TextBox^ textBox_a;
	private: System::Windows::Forms::Label^ label_a;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьМасштабToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->увеличитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->уменьшитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox_c = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_k = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->func = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->label_a = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(36, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(638, 446);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(452, 501);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 52);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Построить!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem,
					this->изменитьМасштабToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1003, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// изменитьМасштабToolStripMenuItem
			// 
			this->изменитьМасштабToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->увеличитьToolStripMenuItem,
					this->уменьшитьToolStripMenuItem
			});
			this->изменитьМасштабToolStripMenuItem->Name = L"изменитьМасштабToolStripMenuItem";
			this->изменитьМасштабToolStripMenuItem->Size = System::Drawing::Size(126, 20);
			this->изменитьМасштабToolStripMenuItem->Text = L"Изменить масштаб";
			// 
			// увеличитьToolStripMenuItem
			// 
			this->увеличитьToolStripMenuItem->Name = L"увеличитьToolStripMenuItem";
			this->увеличитьToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->увеличитьToolStripMenuItem->Text = L"Увеличить";
			this->увеличитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::увеличитьToolStripMenuItem_Click);
			// 
			// уменьшитьToolStripMenuItem
			// 
			this->уменьшитьToolStripMenuItem->Name = L"уменьшитьToolStripMenuItem";
			this->уменьшитьToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->уменьшитьToolStripMenuItem->Text = L"Уменьшить";
			this->уменьшитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::уменьшитьToolStripMenuItem_Click);
			// 
			// textBox_c
			// 
			this->textBox_c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_c->Location = System::Drawing::Point(379, 513);
			this->textBox_c->Name = L"textBox_c";
			this->textBox_c->Size = System::Drawing::Size(42, 29);
			this->textBox_c->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(340, 515);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 24);
			this->label4->TabIndex = 22;
			this->label4->Text = L") +";
			// 
			// textBox_k
			// 
			this->textBox_k->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_k->Location = System::Drawing::Point(210, 514);
			this->textBox_k->Name = L"textBox_k";
			this->textBox_k->Size = System::Drawing::Size(34, 29);
			this->textBox_k->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(256, 513);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 24);
			this->label3->TabIndex = 20;
			this->label3->Text = L"x+";
			// 
			// textBox_b
			// 
			this->textBox_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_b->Location = System::Drawing::Point(293, 513);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(36, 29);
			this->textBox_b->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(188, 513);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 24);
			this->label2->TabIndex = 18;
			this->label2->Text = L"(";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(216, 491);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 24);
			this->label1->TabIndex = 17;
			this->label1->Text = L"k";
			// 
			// func
			// 
			this->func->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->func->FormattingEnabled = true;
			this->func->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L" ", L"cos", L"sin", L"sqrt", L"pow", L"tg" });
			this->func->Location = System::Drawing::Point(86, 513);
			this->func->Name = L"func";
			this->func->Size = System::Drawing::Size(97, 32);
			this->func->TabIndex = 16;
			// 
			// textBox_a
			// 
			this->textBox_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_a->Location = System::Drawing::Point(40, 515);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(39, 29);
			this->textBox_a->TabIndex = 15;
			// 
			// label_a
			// 
			this->label_a->AutoSize = true;
			this->label_a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_a->Location = System::Drawing::Point(51, 491);
			this->label_a->Name = L"label_a";
			this->label_a->Size = System::Drawing::Size(20, 24);
			this->label_a->TabIndex = 14;
			this->label_a->Text = L"a";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(301, 489);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 24);
			this->label5->TabIndex = 24;
			this->label5->Text = L"b";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(389, 489);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 24);
			this->label6->TabIndex = 25;
			this->label6->Text = L"c";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(743, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 50);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Исследовать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(718, 99);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"E in";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(749, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 28;
			this->label8->Text = L"(";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(819, 99);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(10, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L")";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(783, 99);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 13);
			this->label10->TabIndex = 30;
			this->label10->Text = L";";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(764, 99);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"_";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(800, 99);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"_";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(800, 145);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(13, 13);
			this->label13->TabIndex = 38;
			this->label13->Text = L"_";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(764, 145);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(13, 13);
			this->label14->TabIndex = 37;
			this->label14->Text = L"_";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(783, 145);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(10, 13);
			this->label15->TabIndex = 36;
			this->label15->Text = L";";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(819, 145);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(10, 13);
			this->label16->TabIndex = 35;
			this->label16->Text = L")";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(749, 145);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(10, 13);
			this->label17->TabIndex = 34;
			this->label17->Text = L"(";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(718, 145);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(26, 13);
			this->label18->TabIndex = 33;
			this->label18->Text = L"D in";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(718, 208);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(125, 13);
			this->label24->TabIndex = 39;
			this->label24->Text = L"Наибольше значение Х";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(718, 232);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(133, 13);
			this->label19->TabIndex = 40;
			this->label19->Text = L"Наименьшее значение Х";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(718, 283);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(182, 13);
			this->label20->TabIndex = 41;
			this->label20->Text = L"Четное/Нечетное/Ни то ни другое";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(718, 343);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(116, 13);
			this->label21->TabIndex = 42;
			this->label21->Text = L"Точки где Х или Y = 0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(718, 11);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(267, 18);
			this->label22->TabIndex = 43;
			this->label22->Text = L"Эти данные отоброзить в файле";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1003, 565);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_c);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_b);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_k);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->func);
			this->Controls->Add(this->textBox_a);
			this->Controls->Add(this->label_a);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"Графический калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool flag = true;
	public: int unit = 50; //шаг в пискелах
	public: delegate double DelegatePtr(double); //тип функции для рисования
	public: double res_postv = 0;	//Четность нечетность
	public: double res_negatv = 0;
	public: double Ox = 0;
	public: double Oy = 0;

		  //
		  //Преобразование String в SystemString и наоборот
		  //
	private: std::string SystemStringToStdString(System::String^ str)
	{
		return msclr::interop::marshal_as<std::string>(str);
	}
	private: System::String^ StdStringToSystemString(const std::string& str)
	{
		return  msclr::interop::marshal_as<System::String^>(str);
	}

	private:  double f(double x) {
		double y;
		this->button1->Text = L"Построиить!";
		int a, k, b, c;
		if (this->textBox_a->Text == "")
		{
			a = 1;
		}
		else
		{
			a = Convert::ToInt32(this->textBox_a->Text);
		}
		if (this->textBox_k->Text == "")
		{
			k = 1;
		}
		else
		{
			k = Convert::ToInt32(this->textBox_k->Text);
		}
		if (this->textBox_b->Text == "")
		{
			b = 0;
		}
		else
		{
			b = Convert::ToInt32(this->textBox_b->Text);
		}
		if (this->textBox_c->Text == "")
		{
			c = 0;
		}
		else
		{
			c = Convert::ToInt32(this->textBox_c->Text);
		}

		if (func->SelectedItem == nullptr)
		{
			this->button1->Text = L"Введите значения!";
		}
		else if (func->SelectedItem->ToString() == " ")
		{
			y = a * (k * x + b) + c;

			equation = "\ny = " + SystemStringToStdString(a.ToString()) + " * (" + SystemStringToStdString(k.ToString()) + " * x + " + SystemStringToStdString(b.ToString()) + ") + " + SystemStringToStdString(c.ToString());

			res_postv = y;
			res_negatv = a * (k * (-1 * x) + b) + c;

			Ox = -(a * b + c) / (static_cast<double>(a) * k);
			Oy = a * (k * 0 + b) + c;
		}
		else if (func->SelectedItem->ToString() == "cos")
		{
			y = a * Math::Cos(k * x + b) + c;
			equation = "\ny = " + SystemStringToStdString(a.ToString()) + " * cos(" + SystemStringToStdString(k.ToString()) + " * x + " + SystemStringToStdString(b.ToString()) + ") + " + SystemStringToStdString(c.ToString());

			res_postv = y;
			res_negatv = a * Math::Cos(k * (-x) + b) + c;

			Ox = a * Math::Cos(k * x + b) + c - 0;
			Oy = a * Math::Cos(k * 0 + b) + c;

		}
		else if (func->SelectedItem->ToString() == "sin")
		{
			y = a * Math::Sin(k * x + b) + c;
			equation = "\ny = " + SystemStringToStdString(a.ToString()) + " * sin(" + SystemStringToStdString(k.ToString()) + " * x + " + SystemStringToStdString(b.ToString()) + ") + " + SystemStringToStdString(c.ToString());

			res_postv = y;
			res_negatv = a * Math::Sin(k * (-x) + b) + c;

			Ox = a * Math::Sin(k * x + b) + c - 0;
			Oy = a * Math::Sin(k * 0 + b) + c;
		}
		else if (func->SelectedItem->ToString() == "sqrt")
		{
			y = a * Math::Sqrt(k * x + b) + c;
			equation = "\ny = " + SystemStringToStdString(a.ToString()) + " * sqrt(" + SystemStringToStdString(k.ToString()) + " * x + " + SystemStringToStdString(b.ToString()) + ") + " + SystemStringToStdString(c.ToString());

			res_postv = y;
			res_negatv = a * Math::Sqrt(k * (-x) + b) + c;

			Ox = a * Math::Sqrt(k * x + b) + c - 0;
			Oy = a * Math::Sqrt(k * 0 + b) + c;
		}
		else if (func->SelectedItem->ToString() == "pow")
		{
			y = a * Math::Pow((k * x + b), 2) + c;
			equation = "\ny = " + SystemStringToStdString(a.ToString()) + " * (" + SystemStringToStdString(k.ToString()) + " * x + " + SystemStringToStdString(b.ToString()) + ")^2 + " + SystemStringToStdString(c.ToString());

			res_postv = y;
			res_negatv = a * Math::Pow((k * (-x) + b), 2) + c;

			Ox = a * Math::Pow((k * x + b), 2) + c - 0;
			Oy = a * Math::Pow((k * 0 + b), 2) + c;
		}
		else if (func->SelectedItem->ToString() == "tg")
		{
			y = a * (Math::Sin(k * x + b) / Math::Cos(k * x + b)) + c;
			equation = "\ny = " + SystemStringToStdString(a.ToString()) + " * tg(" + SystemStringToStdString(k.ToString()) + " * x + " + SystemStringToStdString(b.ToString()) + ") + " + SystemStringToStdString(c.ToString());

			res_postv = y;
			res_negatv = a * (Math::Sin(k * -x + b) / Math::Cos(k * -x + b)) + c;

			Ox = a * (Math::Sin(k * x + b) / Math::Cos(k * x + b)) + c - 0;
			Oy = a * (Math::Sin(k * 0 + b) / Math::Cos(k * 0 + b)) + c;
		}
		return Double::IsNaN(y) ? 0 : y;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int pW = pictureBox1->Width, pH = pictureBox1->Height;
		//создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
		Bitmap^ img = gcnew Bitmap(pW, pH);
		//создаем устройство для рисования на поверхности
		Graphics^ g = Graphics::FromImage(img);
		//рисуем сетку:
		for (int i = 0; i < pW; i += unit) g->DrawLine(Pens::Blue, i, 0, i, pH);
		for (int i = 0; i < pH; i += unit)  g->DrawLine(Pens::Blue, 0, i, pW, i);
		//находим середину и рисуем линии осей:
		int mX = int(pW / 2 - pW / 2 % unit);
		int mY = int(pH / 2 - pH / 2 % unit);
		g->DrawLine(Pens::Red, mX, 0, mX, pH);
		g->DrawLine(Pens::Red, 0, mY, pW, mY);
		g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
		g->TranslateTransform((float)mX, -(float)mY); //смещаем нулевую координату на пересечение осей
		//рисуем график:
		DelegatePtr^ f = gcnew DelegatePtr(this, &MyForm::f);
		double x1 = -10., x2 = 10., s = 0.25; //границы рисования
		double x = x1;
		double y;
		System::Collections::Generic::List<PointF>^ Points =
			gcnew System::Collections::Generic::List<PointF>(); //коллекция точек графика
		while (x < x2) {
			y = f(x);
			Points->Add(PointF(x * unit, y * unit));
			//добавляем точку в коллекцию. Полученные координаты сразу переводим в экранные единицы
			x += s;
		}
		g->DrawLines(Pens::Green, Points->ToArray()); //рисование линий графика
		delete g; //освобождение ресурсов устройства рисования
		this->pictureBox1->Image = img; //присвоение и отображение изображения в PictureBox
	}

	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Программа Сидакова Амира из группы 2ИСИП-422.");
	}
	private: System::Void увеличитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (unit != 200)
		{
			unit += 10;
		}
		this->button1->PerformClick();
	}
	private: System::Void уменьшитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (unit != 10)
		{
			unit -= 10;
		}
		this->button1->PerformClick();
	}
	private: System::Void func_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {



		std::ofstream out;
		std::string tmp;

		out.open("Исследования.txt", std::fstream::app);

		//
		//Уравнение
		//
		out << "\n" + equation;

		//
		//E(x)
		//
		out << "\nE(x): ";
		if (func->SelectedItem->ToString() == " ") {
			out << " R";	//Рациональные числа
		}

		else if (func->SelectedItem->ToString() == "cos")
		{
			if (this->textBox_a->Text != "" && this->textBox_c->Text != "")
			{
				out << "[ "
					<< Convert::ToInt32(this->textBox_c->Text) - Convert::ToInt32(this->textBox_a->Text)
					<< ";"
					<< Convert::ToInt32(this->textBox_a->Text) + Convert::ToInt32(this->textBox_c->Text)
					<< " ]";
			}
			else if (this->textBox_a->Text != "")
			{
				out << "[ "
					<< -Convert::ToInt32(this->textBox_a->Text)
					<< " ; "
					<< Convert::ToInt32(this->textBox_a->Text)
					<< " ]";
			}
			else if (this->textBox_c->Text != "")
			{
				out << "[ "
					<< Convert::ToInt32(this->textBox_c->Text) - 1
					<< " ; "
					<< Convert::ToInt32(this->textBox_c->Text) + 1
					<< " ]";
			}
			else
			{
				out << "[ " << -1 << " ; " << 1 << " ]";
			}

		}

		else if (func->SelectedItem->ToString() == "sin")
		{
			if (this->textBox_a->Text != "" && this->textBox_c->Text != "")
			{
				out << "[ "
					<< Convert::ToInt32(this->textBox_c->Text) - Convert::ToInt32(this->textBox_a->Text)
					<< ";"
					<< Convert::ToInt32(this->textBox_a->Text) + Convert::ToInt32(this->textBox_c->Text)
					<< " ]";
			}
			else if (this->textBox_a->Text != "")
			{
				out << "[ "
					<< -Convert::ToInt32(this->textBox_a->Text)
					<< " ; "
					<< Convert::ToInt32(this->textBox_a->Text)
					<< " ]";
			}
			else if (this->textBox_c->Text != "")
			{
				out << "[ "
					<< Convert::ToInt32(this->textBox_c->Text) - 1
					<< " ; "
					<< Convert::ToInt32(this->textBox_c->Text) + 1
					<< " ]";
			}
			else
			{
				out << "[ " << -1 << " ; " << 1 << " ]";
			}
		}

		else if (func->SelectedItem->ToString() == "sqrt")
		{
			if (this->textBox_a->Text != "" && Convert::ToInt32(this->textBox_a->Text) > 0)
			{
				if (this->textBox_b->Text == "") {
					out << "[0; +бескон)";
				}
				else
				{
					out << "[" << -Convert::ToInt32(this->textBox_b->Text) << "; +бескон)";
				}
			}
			else if (this->textBox_a->Text != "" && Convert::ToInt32(this->textBox_a->Text) < 0)
			{
				if (this->textBox_b->Text == "") {
					out << "[0; -бескон)";
				}
				else
				{
					out << "[" << -Convert::ToInt32(this->textBox_b->Text) << "; -бескон)";
				}
			}
			else
			{
				if (this->textBox_b->Text == "") {
					out << "[0; +бескон)";
				}
				else
				{
					out << "[" << -Convert::ToInt32(this->textBox_b->Text) << "; +бескон)";
				}
			}

		}

		else if (func->SelectedItem->ToString() == "pow")
		{
			if (this->textBox_a->Text != "" && Convert::ToInt32(this->textBox_a->Text) > 0) {
				if (this->textBox_c->Text == "" && this->textBox_b->Text == "") {
					out << "[0; +бескон)";
				}
				else
				{
					out << "[" << Convert::ToInt32(this->textBox_c->Text) << "; +бескон)";
				}
			}
			else if (this->textBox_a->Text != "" && Convert::ToInt32(this->textBox_a->Text) < 0) {
				if (this->textBox_c->Text == "" && this->textBox_b->Text == "") {
					out << "[0; -бескон)";
				}
				else
				{
					out << "[" << Convert::ToInt32(this->textBox_c->Text) << "; -бескон)";
				}
			}
			else
			{
				if (this->textBox_c->Text == "" && this->textBox_b->Text == "") {
					out << "[0; +бескон)";
				}
				else
				{
					out << "[" << Convert::ToInt32(this->textBox_c->Text) << "; +бескон)";
				}
			}
		}

		else if (func->SelectedItem->ToString() == "tg")
		{
			out << "R";
		}


		//
		//D(x)
		//
		out << "\nD(x): ";
		if (func->SelectedItem->ToString() == " ") {
			out << " R";	//Рациональные числа
		}

		else if (func->SelectedItem->ToString() == "cos")
		{
			out << " R";
		}

		else if (func->SelectedItem->ToString() == "sin")
		{
			out << " R";
		}

		else if (func->SelectedItem->ToString() == "sqrt")
		{
			if (this->textBox_b->Text == "") {
				out << "[0; бескон)";
			}
			else
			{
				out << "[" << -Convert::ToInt32(this->textBox_b->Text) << "; бескон)";
			}
		}

		else if (func->SelectedItem->ToString() == "pow")
		{
			out << "R";
		}

		else if (func->SelectedItem->ToString() == "tg")
		{
			out << "R";
		}

		//
		//Наибольшее значение Х
		//
		out << "\nНаибольше значение Х: ";
		if (func->SelectedItem->ToString() == " ") {
			out << "Нет!";
		}

		else if (func->SelectedItem->ToString() == "cos")
		{
			if (this->textBox_a->Text != "" && this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) + Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_a->Text != "")
			{
				out << Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) + 1;
			}
			else
			{
				out << 1;
			}
		}

		else if (func->SelectedItem->ToString() == "sin")
		{
			if (this->textBox_a->Text != "" && this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) + Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_a->Text != "")
			{
				out << Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) + 1;
			}
			else
			{
				out << 1;
			}
		}

		else if (func->SelectedItem->ToString() == "sqrt") {
			out << "Нет!";
		}

		else if (func->SelectedItem->ToString() == "pow") {
			out << "Нет!";
		}

		else if (func->SelectedItem->ToString() == "tg")
		{
			if (this->textBox_a->Text != "" && this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) + Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_a->Text != "")
			{
				out << Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) + 1;
			}
			else
			{
				out << 1;
			}
		}

		else if (func->SelectedItem->ToString() == "tg") {
			out << "Нет!";
		}

		//
		//Наименьшее значение Х
		//
		out << "\nНаименьшее значение Х: ";
		if (func->SelectedItem->ToString() == " ") {
			out << "Нет!";
		}

		else if (func->SelectedItem->ToString() == "cos")
		{
			if (this->textBox_a->Text != "" && this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) - Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_a->Text != "")
			{
				out << -Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) - 1;
			}
			else
			{
				out << -1;
			}
		}

		else if (func->SelectedItem->ToString() == "sin")
		{
			if (this->textBox_a->Text != "" && this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) - Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_a->Text != "")
			{
				out << -Convert::ToInt32(this->textBox_a->Text);
			}
			else if (this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text) - 1;
			}
			else
			{
				out << -1;
			}
		}

		else if (func->SelectedItem->ToString() == "sqrt") {
			if (this->textBox_b->Text != "" && this->textBox_c->Text != "")
			{
				out << "[" << -Convert::ToInt32(this->textBox_b->Text) << ";" << Convert::ToInt32(this->textBox_c->Text) << "]";
			}
			else if (this->textBox_b->Text != "")
			{
				out << -Convert::ToInt32(this->textBox_b->Text);
			}
			else if (this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text);
			}
			else
			{
				out << 0;
			}
		}

		else if (func->SelectedItem->ToString() == "pow") {
			if (this->textBox_b->Text != "" && this->textBox_c->Text != "")
			{
				out << "[" << -Convert::ToInt32(this->textBox_b->Text) << ";" << Convert::ToInt32(this->textBox_c->Text) << "]";
			}
			else if (this->textBox_b->Text != "")
			{
				out << -Convert::ToInt32(this->textBox_b->Text);
			}
			else if (this->textBox_c->Text != "")
			{
				out << Convert::ToInt32(this->textBox_c->Text);
			}
			else
			{
				out << 0;
			}
		}

		else if (func->SelectedItem->ToString() == "tg") {
			out << "Нет!";
		}

		//
		//Четное/Нечетное/Ни то ни другое
		//
		out << "\nЧетное / Нечетное / Ни то ни другое: ";
		if (func->SelectedItem->ToString() == " " || func->SelectedItem->ToString() == "cos" || func->SelectedItem->ToString() == "sin" || func->SelectedItem->ToString() == "sqrt" || func->SelectedItem->ToString() == "pow" || func->SelectedItem->ToString() == "tg") {

			if (res_postv == res_negatv) {
				out << "Четная!";
			}
			else if (res_negatv == -(res_postv))
			{
				out << "Нечетная!";
			}
			else
			{
				out << "Ни то, ни другое!";
			}
		}

		//
		//Пересечение с осями координат
		//
		out << "\nПересечение с осями координат: ";

		if (func->SelectedItem->ToString() == " " || func->SelectedItem->ToString() == "sqrt" || func->SelectedItem->ToString() == "pow") {
			out << " X = " << Ox << " и Y = " << Oy;
		}

		else if (func->SelectedItem->ToString() == "cos" || func->SelectedItem->ToString() == "sin" || func->SelectedItem->ToString() == "tg")
		{
			if (Ox > 1 && Ox > -1)
			{
				out << " X = " << "Нет пересечения с осью!" << " и Y = " << Oy;
			}
			else
			{
				out << " X = " << Ox << " и Y = " << Oy;
			}
		}


		out.close();

	}
	};
}
