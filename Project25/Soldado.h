#include <iostream>

using namespace std;

class Arma
{
public:
	Arma() {}
	~Arma() { cout << "arma eliminada" << endl; }
	virtual void disparar() {}
	virtual void mostrar() {}
};

//-----------------------------------SOLDADO------------------------------------------//
class Soldado
{
private:
	Arma* arma;
public:
	Soldado() { arma = NULL; }
	~Soldado() { cout << "soldado eliminado" << endl; delete arma; }
	void armaEnUso();
	void dejarArma();
	void recogerArma(Arma*);
	void disparar();
};

void Soldado::armaEnUso() {
	if (arma == NULL)
		cout << "el soldado no tiene ningun arma en sus manos" << endl;
	else
		arma->mostrar();
}

void Soldado::dejarArma() {
	arma = NULL;
	cout << "El soldado dejo el arma que tenia" << endl;
}

void Soldado::recogerArma(Arma* arma) {
	if (this->arma == NULL)
		this->arma = arma;
	else
		cout << "Parece que el soldado ya esta equipado con un arma" << endl;

}

void Soldado::disparar() {

	if (arma != NULL)
		arma->disparar();
	else
		cout << "Parece que el soldado no tiene ningún arma en sus manos.." << endl;
}

//-----------------------------ESCOPETA----------------------------------------------------------//
class Escopeta : virtual public Arma
{
public:
	Escopeta() {}
	~Escopeta() { cout << "ecopeta rota"<<endl; }
	void disparar() { cout << "¡Páááá!..." << endl; }
	void mostrar() { cout << "Escopeta" << endl; }
private:

};
//-------------------------------RIFLE------------------------------------------------------------//
class Rifle : virtual public Arma
{
public:
	Rifle() {}
	~Rifle() {}
	void disparar() { cout << "Púm púm púm!...." << endl; }
	void mostrar() { cout << "Rifle" << endl; }
private:

};
//--------------------------------REVOLVER----------------------------------------------------------//
class Revolver : virtual public Arma
{
public:
	Revolver() {}
	~Revolver() {}
	void disparar() { cout << "¡Pá!..." << endl; }
	void mostrar() { cout << "Revolver" << endl; }
};