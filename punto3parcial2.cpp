/*
*Nombre del Archivo: Punto 3 Parcial 1
*Descripcion: Diseñe una funcion que reciba dos
              numeros enteros a y b, y retorne un char.
*Integrantes: Valentina Granobles
              Dayana Herrera 
              Cristian Ospina
              Juan David Bocanegra
*Fecha de creacion: 5 / Abril / 2017
*ultima Fecha de modificacion: 5 / Abril / 2017
*/

#include <iostream>
#include <string>

using namespace std;

int resultado;

int funcion(int a, int b, int c){
	
	
	if(a > 0 || b > 0){
		resultado = 2 * c;
		}
	else if(a < 0){
			if(b > 5 || b < -5){
				resultado = 3 * c;
			}
			else if(a <= 5 && b > 5){
				resultado = 5 * c;
			}
			else{
				resultado = 4 * c;
			}
		}
	else if(b == 0 && a > 0){
		resultado = 5 * c;
	}
	else {
		resultado = c;
	}
	
	return resultado;
}

int main(){
	
	int a;
	int b;
	int c;
	
	cout << "Ingrese un numero A" << endl;
	cin >> a;
	cout << "Ingrese otro numero B" << endl;
	cin >> b;
	cout << "Ingrese otro numero C" << endl;
	cin >> c;
	
	funcion(a, b, c);
	cout << resultado << endl;
}

