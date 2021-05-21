#pragma once

namespace PortaSerial2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbPorta;
	private: System::Windows::Forms::Button^ btIniciar;
	private: System::Windows::Forms::Button^ btParar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ rtbMensagens;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbComando;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbParametro;
	private: System::IO::Ports::SerialPort^ portaSerial;
	private: System::Windows::Forms::Timer^ timerLeituraPorta;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbPorta = (gcnew System::Windows::Forms::TextBox());
			this->btIniciar = (gcnew System::Windows::Forms::Button());
			this->btParar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rtbMensagens = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbComando = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbParametro = (gcnew System::Windows::Forms::TextBox());
			this->portaSerial = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timerLeituraPorta = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Porta";
			// 
			// tbPorta
			// 
			this->tbPorta->Location = System::Drawing::Point(13, 30);
			this->tbPorta->Name = L"tbPorta";
			this->tbPorta->Size = System::Drawing::Size(100, 20);
			this->tbPorta->TabIndex = 1;
			// 
			// btIniciar
			// 
			this->btIniciar->Location = System::Drawing::Point(137, 26);
			this->btIniciar->Name = L"btIniciar";
			this->btIniciar->Size = System::Drawing::Size(75, 23);
			this->btIniciar->TabIndex = 2;
			this->btIniciar->Text = L"Iniciar";
			this->btIniciar->UseVisualStyleBackColor = true;
			this->btIniciar->Click += gcnew System::EventHandler(this, &MyForm::btIniciar_Click);
			// 
			// btParar
			// 
			this->btParar->Location = System::Drawing::Point(219, 25);
			this->btParar->Name = L"btParar";
			this->btParar->Size = System::Drawing::Size(75, 23);
			this->btParar->TabIndex = 3;
			this->btParar->Text = L"Parar";
			this->btParar->UseVisualStyleBackColor = true;
			this->btParar->Click += gcnew System::EventHandler(this, &MyForm::btParar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Mensagens Recebidas";
			// 
			// rtbMensagens
			// 
			this->rtbMensagens->Location = System::Drawing::Point(13, 92);
			this->rtbMensagens->Name = L"rtbMensagens";
			this->rtbMensagens->Size = System::Drawing::Size(281, 110);
			this->rtbMensagens->TabIndex = 5;
			this->rtbMensagens->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Comando";
			// 
			// tbComando
			// 
			this->tbComando->Location = System::Drawing::Point(13, 226);
			this->tbComando->Name = L"tbComando";
			this->tbComando->Size = System::Drawing::Size(100, 20);
			this->tbComando->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(120, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Parâmetro";
			// 
			// tbParametro
			// 
			this->tbParametro->Location = System::Drawing::Point(123, 226);
			this->tbParametro->Name = L"tbParametro";
			this->tbParametro->Size = System::Drawing::Size(100, 20);
			this->tbParametro->TabIndex = 9;
			// 
			// timerLeituraPorta
			// 
			this->timerLeituraPorta->Interval = 1000;
			this->timerLeituraPorta->Tick += gcnew System::EventHandler(this, &MyForm::timerLeituraPorta_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(326, 274);
			this->Controls->Add(this->tbParametro);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbComando);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->rtbMensagens);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btParar);
			this->Controls->Add(this->btIniciar);
			this->Controls->Add(this->tbPorta);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Mensagem via Serial";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		portaSerial->PortName = tbPorta->Text;
		portaSerial->Open();
		timerLeituraPorta->Enabled = true;
	}
private: System::Void btParar_Click(System::Object^ sender, System::EventArgs^ e) {
	timerLeituraPorta->Enabled = false;
	portaSerial->Close();
}
private: System::Void timerLeituraPorta_Tick(System::Object^ sender, System::EventArgs^ e) {
	String^ comando = portaSerial->ReadLine();
	rtbMensagens->AppendText(comando);
	array<String^>^ substrings = comando->Split(' ');
	tbComando->Text = substrings[0];
	tbParametro->Text = substrings[1];
}
};
}
/* Codigo arduino
String comando;
int contador;
void setup() {
 Serial.begin(9600);
 contador = 0;
}
void loop() {
 comando = "SENSOR " + String(contador);
 Serial.println(comando);
 contador++;
 delay(1000);
}
*/