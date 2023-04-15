#include <iostream>
#include "menu.h"
#include "Soldado.h"
#include <stdlib.h>

using namespace std;

int main() {

	menu men = menu();
	Soldado mambru = Soldado();
	Escopeta *escopeta = new Escopeta();
	Rifle *rifle = new Rifle();
	Revolver *revolver = new Revolver();
	char opc1,opc2;


	do {
		system("cls");
		men.mostrarMenu();
		cin >> opc1;

		switch (opc1)
		{
		case '1':
			men.mostrarMenuArma();
			cin >> opc2;
			switch (opc2)
			{
				case '1':
					mambru.recogerArma(revolver);
					break;
				case '2':
					mambru.recogerArma(rifle);
					break;
				case '3':
					mambru.recogerArma(escopeta);
					break;
				case 'x':
				case 'X':
					cout << "Adios" << endl;
					break;
				default:
					cout << "Opcion incorrecta" << endl;
			}
			break;
		case '2':	
			mambru.dejarArma();
			break;
		case '3':	
			mambru.disparar();
			break;
		case '4':
			mambru.armaEnUso();
			break;
		case 'X':
		case 'x':
			cout << "Adios" << endl;
			break;
		default:
			cout << "Opcion incorrecta" << endl;
		}
		cout << "presione enter" << endl;
		cin.get();
		cin.get();
	} while (opc1!='X' && opc1!='x');
	
	delete escopeta;
	delete revolver;
	delete rifle;
	return 1;
}