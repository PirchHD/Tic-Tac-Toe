#include "Game.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TicTacToe::Game forma;
	Application::Run(% forma);
	return 0;
}

