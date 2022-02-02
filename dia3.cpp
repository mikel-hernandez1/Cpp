# include <iostream>
using namespace std;

// FUNCIONES

int num_Mayor(int num, int numMay){
	if (num > numMay) numMay = num;
	return numMay;
}

int num_Menor(int num, int numMen){
	if (num < numMen) numMen = num;
	return numMen;
}

int pide_Numeros(){
	int numero;
	cout << "Introduce un numero: ";
	cin >> numero;
	return numero;
}

int suma_Numeros(int nume, int tot){
	tot = tot + nume;
	return tot;
}

void clasifica_Numeros(int salida){
	int num;
	int mayor = 0;
	int menor = 10000;
	int total = 0;
	int cont = 0;
	int media;
	cout << "Introduce -1 para terminar" << endl;
	num = pideNumeros();
	do{
		mayor = num_Mayor (num, mayor);
		menor = num_Menor (num, menor);
		total = suma_Numeros(num, total);
		cont += 1;
		num = pide_Numeros();
	} while (num != salida);
	media = total / cont;

	cout << "MAYOR: " << mayor << endl;
	cout << "MENOR: " << menor << endl;
	cout << "MEDIA: " << media << endl;
}

int suma_Potencias (int num){
	int sub = 2;
	int total = 0;
	int cont = 0;
	for (int i = 0; i < num; i++){
		sub = 2;
		for (int j = 0; j < cont; j++){
			sub = sub * 2;
		}
		total = total + sub;
		cont += 1;
	}
	return total;
}

void cuenta_Atras(int num){
	cout << endl << "CUENTA ATRAS" << endl;
	for (num; num >= 0; num -= 1){
		cout << num << "\t";
	}
}

//-----------------------------------------------------------

int main() {

	int numeros = 100;
	int salto = 4;
	int arrayNumeros [numeros];
	int arraySuma [numeros/salto];
	int suma;
	int cont = 0;


	int fin = -1;
	int numero;
	int resultado;
	int descuento = 100;


	for (int i = 0; i < numeros; i++){
		arrayNumeros [i] = i;
	}

	for (int j = 0; j < numeros; j+=4){
		suma = arrayNumeros[j]+arrayNumeros[j+1]+arrayNumeros[j+2]+arrayNumeros[j+3];
		arraySuma[cont] = suma;
		cont++;
	}

	for (int k = 0; k < numeros/salto; k++){
		cout << arraySuma[k] << endl;
	}

//-----------------------------------------------------------
  
	// EJERCICIO 1.
	string contrasegna;
	string entrada;
	cout << "Introduce la nueva contrasegna: " << endl;
	cin >> contrasegna;
	while (entrada != contrasegna){
		cout << "Introduce contrasegna: ";
		cin >> entrada;
}

//-----------------------------------------------------------
	// EJERCICIO 2.
	int edad;
	int mayor = 18;
	string respuesta = "Te quedan colacaos";

	cout << "Introduce tu edad actual: ";
	cin >> edad;
	if (edad >= mayor){
		respuesta = "Eres mayor de edad... pero te quedan colacaos";
	}
	cout << respuesta << endl;

//-----------------------------------------------------------
  
	// EJERCICIO 3.
	float nota;
	string calificacion;
	cout << "Introduce tu nota con dos decimales: ";
	cin >> nota;
	if (nota < 5.00){
		calificacion = "SUSPENSO!";
	}
	if (nota >= 5.00 and nota <6.00){
		calificacion = "SUFICIENTE";
	}
	if (nota >= 6.00 and nota <8.00){
		calificacion = "BIEN";
	}
	if (nota >= 8.00 and nota <10.00){
		calificacion = "NOTABLE";
	}
	if (nota == 10.00){
		calificacion = "SOBRESALIENTE";
	}
	cout << calificacion << endl;

//-----------------------------------------------------------------------------------------------
	// EJERCICIO 4
	int numeroParOImpar;

	cout << "Introduce un numero entero: ";
	cin >> numeroParOImpar;
	if (numeroParOImpar % 2 == 0){
		cout << "El número es Par" << endl;
	}
	if (numeroParOImpar % 2 != 0){
		cout << "El número es impar" << endl;
	}


//-----------------------------------------------------------
  
	// EJERCICIO 5.
	int miArray[20];
	int arrayPares[20];
	int max = 20;
	int l = 0;

	for (int c = 0; c < max; i++){
		cout << "Introduzca una lista de números: ";
		cin >> miArray[i];
	}

	cout << " Este es mi array: ";
	for (int z = 0; z < max; j++){
		cout << miArray[j] << ", ";
	}

	for (int p = 0; p < max; k++){
		if (miArray[p] % 2 == 0){
			arrayPares[l] = miArray[p];
			l+=1;
		}
	}

		cout << endl << " este es el array de numeros pares: ";
		for (int u = 0; m < l; m++){
			cout << arrayPares[m] << ", ";
		}

	cout << endl;
	cout << endl;
	cout << endl;
  
//-----------------------------------------------------------

// EJERCICIO 6.

	clasifica_Numeros(fin);

//-----------------------------------------------------------
  
// EJERCICIO 7.

	cout << endl;
	numero = pide_Numeros();
	resultado = suma_Potencias(numero);
	cout << endl;
	cout << "2^1 + 2^2 + ... + 2^n = " << resultado << endl;

//-----------------------------------------------------------
  
// EJERCICIO 8.

	cuenta_Atras(descuento);


return 0;
}
