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

char resultado;

char funcion(int a, int b){
	
	if(b > 0 && a > 0){
		resultado = 'c';
		}
	else if(b < 0){
			if(a > 5 || b < -5){
				resultado = 'd';
			}
			else if(a <= 5 && b > 5){
				resultado = 'f';
			}
			else{
				resultado = 'k';
			}
		}
	else if(b == 0 && a > 0){
		resultado = 'u';
	}
	else {
		resultado = 'v';
	}
	
	return resultado;
}

int main(){
	
	int a;
	int b;
	
		cout << "Ingrese un numero a:" << endl;
		cin>> a;
		cout << "Ingrese otro numero b:" << endl;
		cin>> b;	
		
	funcion(a,b);
		cout << resultado << endl;	
	}
