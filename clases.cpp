#include <iostream>
using namespace std;

class Rectangulo {
private:
	double base;
	double altura;
public:
	Rectangulo(double base = 0, double altura = 0){
		this->base = base;
		this->altura = altura;
	}
	void setBase(double base){
		this->base = base;
	}
	void setAltura(double altura){
		this->altura = altura;
	}
	double getBase(){
		return this->base;
	}
	double getAltura(){
		return this->altura;
	}
	void imprimir(){
		cout << "La base es " << this->base << " y la altura es " << this->altura << endl;
	}
};

int main(){

	Rectangulo folio(5,3);
	Rectangulo tablero;
	Rectangulo manta(4);

	cout << "Folio: " << endl;
	folio.imprimir();
	folio.setBase(2);
	folio.setAltura(2);
	folio.imprimir();
	cout << "Tablero: " << endl;
	tablero.imprimir();
	cout << "Manta: " << endl;
	tablero.imprimir();

	return 0;
}

/* Una clase es una estructura. Por eso se pone ; al final de los
paréntesis */
