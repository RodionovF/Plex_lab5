#pragma once
#include "Plexx.h"
#include <stdio.h>



namespace Plex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		TPoint **p;
		ISharp *plex=NULL;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  c;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	protected:
		TPoint *move;
		
		void add()
		{
		
		plex = NULL;
		move = NULL;
		p = new TPoint*[3];
		p[0] = new TPoint(10, 10);
		p[1] = new TPoint(100, 10);
		p[2] = new TPoint(10, 100);
		TSharpPoint *p1 = new TSharpPoint(p[0]);
		TSharpPoint *p2 = new TSharpPoint(p[1]);
		TSharpPoint *p3 = new TSharpPoint(p[2]);
		TSharpLine *l1 = new TSharpLine(p1, p2);
		
		TSharpLine *l2 = new TSharpLine(p3, l1);
		plex = l2;
		}

		void addRectangle() {
			plex = NULL;
			move = NULL;
			p = new TPoint*[3];
			p[0] = new TPoint(10, 10);
			p[1] = new TPoint(100, 100);
			
			TSharpPoint *p1 = new TSharpPoint(p[0]);
			TSharpPoint *p2 = new TSharpPoint(p[1]);
			
			
			TSharpRectangle *r1 = new TSharpRectangle(p1, p2);
			plex = r1;
		}

		void addTriangl()
		{
			plex = NULL;
			move = NULL;
			p = new TPoint*[3];
			p[0] = new TPoint(10, 10);
			p[1] = new TPoint(100, 10);
			p[2] = new TPoint(10, 100);
			TSharpPoint *p1 = new TSharpPoint(p[0]);
			TSharpPoint *p2 = new TSharpPoint(p[1]);
			TSharpPoint *p3 = new TSharpPoint(p[2]);
			TSharpTriangle *t1 = new TSharpTriangle(p1, p2, p3);
			plex = t1;
		}


	/////////////////////////////////////
		void addpoint()
		{
			move = NULL;
		/*	if (plex != NULL)
			{
				TPoint* p = new TPoint(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
				TSharpPoint *p1 = new TSharpPoint(p);
				TSharpRectangle *l1 = new TSharpRectangle(p1, plex);
				plex = l1;
			}*/


			//else {
				
				TPoint* p = new TPoint(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
				TSharpPoint *p1 = new TSharpPoint(p);

				plex = p1;
			//}
		}

		void addRect()
		{
			move = NULL;
			TPoint* p = new TPoint(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
			TSharpPoint *p1 = new TSharpPoint(p);
			TSharpRectangle *l1 = new TSharpRectangle(p1, plex);
			plex = l1;

		}
		void addLine()
		{
			move = NULL;
			TPoint* p = new TPoint(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
			TSharpPoint *p1 = new TSharpPoint(p);
			TSharpLine *l1 = new TSharpLine(p1, plex);
			plex = l1;

		}

		void addTriangle()
		{
			move = NULL;
			TPoint* p = new TPoint(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
			TPoint* t = new TPoint(Convert::ToInt32(textBox4->Text), Convert::ToInt32(textBox3->Text));
			TSharpPoint *p1 = new TSharpPoint(p);
			TSharpPoint *t1 = new TSharpPoint(t);
			TSharpTriangle *k = new TSharpTriangle(p1, t1, plex);
			plex = k;

		}

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
	


		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->c = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(38, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(653, 166);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseUp);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->Location = System::Drawing::Point(540, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"AddLine";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->Location = System::Drawing::Point(459, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"AddRect";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button3->Location = System::Drawing::Point(369, 184);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"AddTriangle";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button4->Location = System::Drawing::Point(92, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Добавить точку";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox1->Location = System::Drawing::Point(38, 234);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(40, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 237);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Х";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"У";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox2->Location = System::Drawing::Point(38, 262);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 20);
			this->textBox2->TabIndex = 8;
			// 
			// c
			// 
			this->c->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->c->Location = System::Drawing::Point(583, 278);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(75, 23);
			this->c->TabIndex = 9;
			this->c->Text = L"button5";
			this->c->UseVisualStyleBackColor = true;
			this->c->Click += gcnew System::EventHandler(this, &MyForm::c_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button5->Location = System::Drawing::Point(92, 278);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 45);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Добавить прямоугольник";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox3->Location = System::Drawing::Point(307, 270);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(40, 20);
			this->textBox3->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(286, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"У";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(287, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Х";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox4->Location = System::Drawing::Point(307, 245);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 20);
			this->textBox4->TabIndex = 11;
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button6->Location = System::Drawing::Point(92, 237);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 35);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Доавить линию";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button7->Location = System::Drawing::Point(369, 245);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 44);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Добавить треугольник";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 354);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->c);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Pen ^ pen = gcnew Pen(Color::Black, 2);
		
		Brush ^b = gcnew SolidBrush(Color::Red);
		if (plex != NULL)
		{
			plex->Show(e->Graphics, pen, b);
		}
	}

	//private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		move = NULL;
	}
private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	move = plex->find(e->X, e->Y);
}
private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (move != NULL)
	{
		move->x = e->X;
		move->y = e->Y;
		panel1->Refresh();
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	add();
	
	Refresh();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	addRectangle();
	Refresh();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	addTriangle();
	Refresh();
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
	addpoint();
	Refresh();
}
private: System::Void c_Click(System::Object^  sender, System::EventArgs^  e) {
	plex = NULL;
	panel1->Refresh();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	addRect();
	Refresh();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	addLine();
	Refresh();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	addTriangle();
	Refresh();
}
};
}
