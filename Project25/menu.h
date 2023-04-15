#include<iostream>
using namespace std;
class menu
{
public:
	void mostrarMenu();
	void mostrarMenuArma();
};

void menu::mostrarMenu() {
	cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-\n\nQue desea hacer?\n(pesione el numero correspondiente a la opcion del menu)\n\n1- Recoger arma\n2- Dejar arma\n3- Disparar\n4- Ver arma en uso\nX- Salir" << endl;
}

void menu::mostrarMenuArma() {
	cout << "Por favor, escoja el arma que desea utilizar:\n\n1- Revolver\n2- Rifle\n3- Escopeta\nX- Volver atras" << endl;
}
