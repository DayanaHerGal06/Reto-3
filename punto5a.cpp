/*
*Nombre del archivo: punto5b.cpp
*Descripcion: Permite transformar un numero de base decimal a base binaria
*Integrantes: 
	Valentina Granobles
	Dayana Herrera
	Cristian Ospina
*Fecha de modificacion: 07 de abril del 2017
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string baseBinaria(int n){
	string resultado1="";
	
	while(n>=2){
		int residuo;
		stringstream convertir1;
		residuo=n%2;
		
		convertir1<< residuo;
		resultado1+=convertir1.str();
		
		residuo=0;
		n=n/2;		
		
		}
	stringstream convertir2;
	convertir2<<n;
	resultado1.append(convertir2.str());
	
	string resultadoFinal="";
	
	for(int i= resultado1.length() -1; i >= 0; i--){
		resultadoFinal+=resultado1[i];
		}
		
		return resultadoFinal;


}

int main(){
	int numero=0;
	
	cout<<"ingrese un numero"<<endl;
	cin>>numero;
	
	string resultado;
	resultado= baseBinaria(numero);
	cout<<resultado<<endl;
	
	
	return 0;
}
