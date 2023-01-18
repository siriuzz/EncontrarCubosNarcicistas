/*
Enunciado: Programa para identificar si un numero entre 100 y 999 es narcicista o no.

Integrantes:
-Ashley Marisell Paula (1108023)
-Elián Matos Díaz (1106901)
-John Del Rosario Sánchez (1106940)
-Juan Ubiera Méndez (1107248)
-Kelvin García (1107646)

Fecha de creación: 9-11-2022
*/

#include <iostream>
#include <string>
using namespace std;

string inputStr; //string insertado por el usuario
int num; //input del usuario convertido a int 
int numbers[3]; //array que contiene los 3 digitos del numero insertado
int finalSum = 0; //suma de los cubos de cada digito del numero

int main()
{
	inputStr = ""; //string insertado por el usuario
	int num = 0; //input del usuario convertido a int 

	cout << "Cubos narcicistas!\nEn este programa encontraremos los cubos narcicistas que existen entre el 100 y el 999" << endl;

	for (int i = 100; i < 1000; i++) {
		int finalSum = 0; //suma de los cubos de cada digito del numero

		inputStr = to_string(i);
		num = i;
		//se convierte cada digito a numero, se eleva al cubo y se suma al total
		for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
			numbers[i] = int(inputStr[i] - '0'); //casting hacia int de un character
			finalSum += pow(numbers[i], 3);
		}

		//se verifica si la suma es igual al numero ingresado
		if (num == finalSum) {
			cout << "El numero " << i << " un cubo narcicista!!" << endl; //Resultados esperados: 370,371,153,407
		}

	}
}
