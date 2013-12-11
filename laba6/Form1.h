#pragma once

namespace laba6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button3;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Please enter dimension of array";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(121, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Your array:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(137, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Min\\max value:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(137, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Product between them:";
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(202, 72);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 23);
			this->Exit->TabIndex = 9;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &Form1::Exit_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Waiting..";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(121, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Get it";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(12, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 97);
			this->label6->TabIndex = 13;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Location = System::Drawing::Point(140, 125);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 45);
			this->label7->TabIndex = 14;
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Location = System::Drawing::Point(140, 198);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 24);
			this->label8->TabIndex = 15;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(202, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Again";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(284, 242);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Array";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			static int dim;
			static int e1=0;
			static array<int,2>^ A = gcnew array<int,2>(50,50);
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			array<String^>^ as;
			array<Char>^ ar;
			ar=gcnew array<Char> (1);
			ar[0]=' ';
			if ((textBox2->Text->Length!=0)&&(textBox1->Text->Length!=0))
			{
				dim=Convert::ToInt32(textBox1->Text);
				label1->Text="Your dimension: "+System::Convert::ToString(dim);
				as=textBox2->Text->Split(ar);
				for(int i=0;i<Convert::ToInt32(textBox1->Text);i++)
					for( int j=0;j<Convert::ToInt32(textBox1->Text);j++)
					{
						A[i,j]=Convert::ToInt32(as[e1]);
						e1++;
					}
				textBox2->Clear();
				label5->Text="Nice";
				for(int i=0;i<Convert::ToInt32(textBox1->Text);i++)
			{
				 for( int j=0;j<Convert::ToInt32(textBox1->Text);j++)
					label6->Text+=System::Convert::ToString(A[i,j])+" ";
				 label6->Text += Environment::NewLine;
			}
			this->AcceptButton = button2;
			}
			else
				label1->Text="Please enter dimension and row: ";
			 };
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	label1->Text="Your dimension: "+System::Convert::ToString(textBox1->Text);
	if(textBox1->Text!="")
		label5->Text="Please input "+System::Convert::ToString(Convert::ToInt32(textBox1->Text)*Convert::ToInt32(textBox1->Text))+" elements";
	else
		label5->Text="Waiting..";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int tempMax=0;
			 int tempMin=9999999;
			 int tempImin, tempJmin, tempImax, tempJmax;
			 for(int i=0;i<Convert::ToInt32(textBox1->Text);i++)
				 for( int j=0;j<Convert::ToInt32(textBox1->Text);j++)
					 if(tempMax<A[i,j])
					 {
						 tempMax=A[i,j];
						 tempImax=i;
						 tempJmax=j;
					 }
			 for(int i=0;i<Convert::ToInt32(textBox1->Text);i++)
				 for( int j=0;j<Convert::ToInt32(textBox1->Text);j++)
					 if(tempMin>A[i,j])
					 {
						 tempMin=A[i,j];
						 tempImin=i;
						 tempJmin=j;
					 }
			 label7->Text="Min: "+System::Convert::ToString(tempMin)+" Max: "+System::Convert::ToString(tempMax);
			 int ans=1;
			 for(int j=tempJmin;j<Convert::ToInt32(textBox1->Text);j++)
				 ans*=A[tempImin,j];
			 for(int i=tempImin+1;i<tempImax;i++)
				 for( int j=0;j<Convert::ToInt32(textBox1->Text);j++)
					 ans*=A[i,j];
			 for(int j=0;j<tempJmax;j++)
				 ans*=A[tempImax,j];
			 label8->Text=System::Convert::ToString(ans);
			 this->AcceptButton = button3;
			 	 };
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Clear();
			 textBox1->Clear();
			 label6->Text="";
			 label7->Text="";
			 label8->Text="";
			 this->AcceptButton = button1;
		 }
};
}