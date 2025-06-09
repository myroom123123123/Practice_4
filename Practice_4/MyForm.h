#pragma once

namespace Practice4 {

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
	private: System::Windows::Forms::Button^  btnGenerateArray;
	private: System::Windows::Forms::Button^  btnCalculate;
	private: System::Windows::Forms::TextBox^  txtArraySize;
	private: System::Windows::Forms::TextBox^  txtResult;
	private: System::Windows::Forms::Label^  lblArraySize;
	private: System::Windows::Forms::Label^  lblResult;
	private: System::Windows::Forms::ListBox^  lstArray;
	private: System::Windows::Forms::Label^  lblArrayElements;
	private: System::Windows::Forms::GroupBox^  groupBoxControls;
	private: System::Windows::Forms::GroupBox^  groupBoxArray;

	private: 
		array<int>^ arrayData;

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
			this->btnGenerateArray = (gcnew System::Windows::Forms::Button());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->txtArraySize = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->lblArraySize = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->lstArray = (gcnew System::Windows::Forms::ListBox());
			this->lblArrayElements = (gcnew System::Windows::Forms::Label());
			this->groupBoxControls = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxArray = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxControls->SuspendLayout();
			this->groupBoxArray->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGenerateArray
			// 
			this->btnGenerateArray->Location = System::Drawing::Point(15, 68);
			this->btnGenerateArray->Name = L"btnGenerateArray";
			this->btnGenerateArray->Size = System::Drawing::Size(120, 25);
			this->btnGenerateArray->TabIndex = 0;
			this->btnGenerateArray->Text = L"Згенерувати масив";
			this->btnGenerateArray->UseVisualStyleBackColor = true;
			this->btnGenerateArray->Click += gcnew System::EventHandler(this, &MyForm::btnGenerateArray_Click);
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(15, 99);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(120, 25);
			this->btnCalculate->TabIndex = 1;
			this->btnCalculate->Text = L"Обчислити";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);
			// 
			// txtArraySize
			// 
			this->txtArraySize->Location = System::Drawing::Point(15, 42);
			this->txtArraySize->Name = L"txtArraySize";
			this->txtArraySize->Size = System::Drawing::Size(230, 20);
			this->txtArraySize->TabIndex = 2;
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(15, 155);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(230, 20);
			this->txtResult->TabIndex = 3;
			// 
			// lblArraySize
			// 
			this->lblArraySize->AutoSize = true;
			this->lblArraySize->Location = System::Drawing::Point(12, 26);
			this->lblArraySize->Name = L"lblArraySize";
			this->lblArraySize->Size = System::Drawing::Size(129, 13);
			this->lblArraySize->TabIndex = 4;
			this->lblArraySize->Text = L"Введіть розмірність масиву:";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(12, 139);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(129, 13);
			this->lblResult->TabIndex = 5;
			this->lblResult->Text = L"Добуток парних елементів:";
			// 
			// lstArray
			// 
			this->lstArray->FormattingEnabled = true;
			this->lstArray->Location = System::Drawing::Point(15, 42);
			this->lstArray->Name = L"lstArray";
			this->lstArray->Size = System::Drawing::Size(175, 134);
			this->lstArray->TabIndex = 6;
			// 
			// lblArrayElements
			// 
			this->lblArrayElements->AutoSize = true;
			this->lblArrayElements->Location = System::Drawing::Point(12, 26);
			this->lblArrayElements->Name = L"lblArrayElements";
			this->lblArrayElements->Size = System::Drawing::Size(116, 13);
			this->lblArrayElements->TabIndex = 7;
			this->lblArrayElements->Text = L"Добуток парних елементів:";
			// 
			// groupBoxControls
			// 
			this->groupBoxControls->Controls->Add(this->lblResult);
			this->groupBoxControls->Controls->Add(this->lblArraySize);
			this->groupBoxControls->Controls->Add(this->txtResult);
			this->groupBoxControls->Controls->Add(this->txtArraySize);
			this->groupBoxControls->Controls->Add(this->btnCalculate);
			this->groupBoxControls->Controls->Add(this->btnGenerateArray);
			this->groupBoxControls->Location = System::Drawing::Point(12, 12);
			this->groupBoxControls->Name = L"groupBoxControls";
			this->groupBoxControls->Size = System::Drawing::Size(260, 190);
			this->groupBoxControls->TabIndex = 8;
			this->groupBoxControls->TabStop = false;
			// 
			// groupBoxArray
			// 
			this->groupBoxArray->Controls->Add(this->lblArrayElements);
			this->groupBoxArray->Controls->Add(this->lstArray);
			this->groupBoxArray->Location = System::Drawing::Point(278, 12);
			this->groupBoxArray->Name = L"groupBoxArray";
			this->groupBoxArray->Size = System::Drawing::Size(205, 190);
			this->groupBoxArray->TabIndex = 9;
			this->groupBoxArray->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 211);
			this->Controls->Add(this->groupBoxArray);
			this->Controls->Add(this->groupBoxControls);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Знайти добуток всіх парних елементів одновимірного масиву";
			this->groupBoxControls->ResumeLayout(false);
			this->groupBoxControls->PerformLayout();
			this->groupBoxArray->ResumeLayout(false);
			this->groupBoxArray->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnGenerateArray_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			int size = Convert::ToInt32(txtArraySize->Text);
			
			if (size <= 0 || size > 100) {
				MessageBox::Show("Розмірність масиву повинна бути від 1 до 100!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			
			// Create and fill the array with random values
			arrayData = gcnew array<int>(size);
			Random^ rand = gcnew Random();
			
			lstArray->Items->Clear();
			
			for (int i = 0; i < size; i++) {
				arrayData[i] = rand->Next(-50, 51); // Generate numbers from -50 to 50
				lstArray->Items->Add(i.ToString() + ": " + arrayData[i].ToString());
			}
			
			txtResult->Clear();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Введіть коректне числове значення для розмірності масиву!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
		if (arrayData == nullptr || arrayData->Length == 0) {
			MessageBox::Show("Спочатку згенеруйте масив!", "Попередження", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		
		int product = 1;
		bool evenFound = false;
		
		for (int i = 0; i < arrayData->Length; i++) {
			if (arrayData[i] % 2 == 0 && arrayData[i] != 0) { // Check if element is even and not zero
				product *= arrayData[i];
				evenFound = true;
			}
		}
		
		if (evenFound) {
			txtResult->Text = product.ToString();
		}
		else {
			txtResult->Text = "Не знайдено парних елементів";
		}
	}
	};
}
