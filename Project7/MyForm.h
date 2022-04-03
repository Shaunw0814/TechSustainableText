#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <msclr\marshal_cppstd.h>

namespace Project7 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(38, 447);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 103);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Replace with nothing";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::folderBrowserDialog1_HelpRequest);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 99);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(332, 40);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(387, 447);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(185, 103);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Replace with spaces";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(140, 216);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(332, 41);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(239, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Input Location";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(239, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Output Location";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(239, 286);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Scratch this";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(140, 334);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(332, 45);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 595);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		auto inputFile = msclr::interop::marshal_as<std::string>(textBox1->Text);
		auto outputFile = msclr::interop::marshal_as<std::string>(textBox2->Text);
		auto character = msclr::interop::marshal_as<std::string>(textBox3->Text);

		ifstream input(inputFile);
		ofstream output(outputFile);

		vector<string> behold;   //questionable new set of words

		int mode = 1;                //mode 1, optional, removes without leaving space


		string temp;        //temp string to take in file words seperated by whitespace
		if (!input) {
			cout << "file error" << endl;
			
		}
		while (input >> temp) {
			if (mode == 1) {
				temp.erase(remove(temp.begin(), temp.end(), character[0]), temp.end());
				behold.push_back(temp);
			}				
		}
		

		input.close();

		for (int i = 0; i < behold.size(); i++) {
			output << behold[i] << " ";
		}

		output.close();


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		auto inputFile = msclr::interop::marshal_as<std::string>(textBox1->Text);
		auto outputFile = msclr::interop::marshal_as<std::string>(textBox2->Text);
		auto character = msclr::interop::marshal_as<std::string>(textBox3->Text);

		ifstream input(inputFile);
		ofstream output(outputFile);

		vector<string> behold;   //questionable new set of words

		int mode;                //mode 1, optional, removes without leaving space


		string temp;        //temp string to take in file words seperated by whitespace
		if (!input) {
			cout << "file error" << endl;
			
		}
		while (input >> temp) {
			if (mode == 1) {
				temp.erase(remove(temp.begin(), temp.end(), character[0]), temp.end());
				behold.push_back(temp);
			}

			else {
				int start = 0;
				//default
				
				for (int i = 0; i < temp.length(); i++) {
					if (temp[i] == character[0]) {
						temp[i] = ' ';
					}
				}
				behold.push_back(temp);
			}

		}


		input.close();

		for (int i = 0; i < behold.size(); i++) {
			output << behold[i] << " ";
		}

		output.close();


	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
	}


