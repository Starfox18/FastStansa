#pragma once

#include "Lector_PruebaForm.h"
#include "ProductForm.h"
#include "SaleForm.h"

namespace StansaGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StansaAPPForm
	/// </summary>
	public ref class StansaAPPForm : public System::Windows::Forms::Form
	{
	public:
		StansaAPPForm(void)
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
		~StansaAPPForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  realizarVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  actualizarProductosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lectorPruebaToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actualizarProductosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lectorPruebaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->operacionesToolStripMenuItem,
					this->mantenimientoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarVentaToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarVentaToolStripMenuItem
			// 
			this->realizarVentaToolStripMenuItem->Name = L"realizarVentaToolStripMenuItem";
			this->realizarVentaToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->realizarVentaToolStripMenuItem->Text = L"Realizar Venta";
			this->realizarVentaToolStripMenuItem->Click += gcnew System::EventHandler(this, &StansaAPPForm::realizarVentaToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->actualizarProductosToolStripMenuItem,
					this->lectorPruebaToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// actualizarProductosToolStripMenuItem
			// 
			this->actualizarProductosToolStripMenuItem->Name = L"actualizarProductosToolStripMenuItem";
			this->actualizarProductosToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->actualizarProductosToolStripMenuItem->Text = L"Actualizar Productos";
			this->actualizarProductosToolStripMenuItem->Click += gcnew System::EventHandler(this, &StansaAPPForm::actualizarProductosToolStripMenuItem_Click);
			// 
			// lectorPruebaToolStripMenuItem
			// 
			this->lectorPruebaToolStripMenuItem->Name = L"lectorPruebaToolStripMenuItem";
			this->lectorPruebaToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->lectorPruebaToolStripMenuItem->Text = L"Lector Prueba";
			this->lectorPruebaToolStripMenuItem->Click += gcnew System::EventHandler(this, &StansaAPPForm::lectorPruebaToolStripMenuItem_Click);
			// 
			// StansaAPPForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"StansaAPPForm";
			this->Text = L"StansaAPPForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lectorPruebaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Lector_PruebaForm^ pForm = gcnew Lector_PruebaForm();
		pForm->MdiParent = this;
		pForm->Show();
	}
private: System::Void realizarVentaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	SaleForm^ pForm = gcnew SaleForm();
		pForm->MdiParent = this;
		pForm->Show();
	}
private: System::Void actualizarProductosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ProductForm^ pForm = gcnew ProductForm();
	pForm->MdiParent = this;
	pForm->Show();
}
};
}