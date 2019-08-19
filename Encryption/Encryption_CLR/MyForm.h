#pragma once

namespace EncryptionCLR {

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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Decrypt;
	private: System::Windows::Forms::Button^  Encyrpt;
	protected:



	private: System::Windows::Forms::TextBox^  textBox1;














	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Encyrpt = (gcnew System::Windows::Forms::Button());
			this->Decrypt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 75);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(355, 175);
			this->textBox1->TabIndex = 0;
			// 
			// Encyrpt
			// 
			this->Encyrpt->Location = System::Drawing::Point(50, 264);
			this->Encyrpt->Name = L"Encyrpt";
			this->Encyrpt->Size = System::Drawing::Size(75, 39);
			this->Encyrpt->TabIndex = 1;
			this->Encyrpt->Text = L"Encrypt";
			this->Encyrpt->UseVisualStyleBackColor = true;
			// 
			// Decrypt
			// 
			this->Decrypt->AccessibleName = L"Decrypt";
			this->Decrypt->Location = System::Drawing::Point(230, 264);
			this->Decrypt->Name = L"Decrypt";
			this->Decrypt->Size = System::Drawing::Size(75, 39);
			this->Decrypt->TabIndex = 2;
			this->Decrypt->Text = L"Decrypt";
			this->Decrypt->UseVisualStyleBackColor = true;
			this->Decrypt->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(379, 321);
			this->Controls->Add(this->Decrypt);
			this->Controls->Add(this->Encyrpt);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L" Encryptor";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bindingNavigatorMoveNextItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}

};
}
