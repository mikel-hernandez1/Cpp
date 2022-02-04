# include <iostream>
# include <stdlib.h> 
# include <time.h> 
using namespace std;

void rellena(int array[], int tam){
	srand(time (NULL));
	for(int i = 0; i < tam; i++){
		array[i] = 5 + rand()%15;
	}
}

void rellena2(int array[], int tam){
	srand(time(NULL));
	int num = rand()%tam;
	array[num] = 1;
}

void Array(int array[], int tam){
	cout << "\t[";
	for (int i = 0; i < tam - 1; i++){
		cout << array[i] << ", ";
	}
	cout << array[tam - 1] << "]" << endl;
}



int main() {

	int arrayMas5 [10];
	int arrayBin [] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int tama = 10;
	int arrayPruebas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	//-----------------------EJERCICIO 1-------------------------------------------------------

	string nombre = "Mikel Hernández Alonso.";
	cout << endl << nombre << endl;

	//-----------------------EJERCICIO 2-------------------------------------------------------

	//printArray (arrayPruebas, tama);


	rellena(array, tama);   		//	2.1
	//printArray(arrayMas5, tama);
	rellena2(array, tama);			//	2.2
	//printArray(arrayBin, tama);
	
	return 0;
}
