#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void agregarProducto(string producto, double cantidad, map<string, double> &inventario ){
	for(map<string,double>::iterator iti = inventario.begin(); iti!=inventario.end(); iti++){
		if (iti->first.compare (producto)==0){
			inventario[iti->first]+=cantidad;
			}
          else  { 
		    inventario[producto]=cantidad;
			}
	 }
}

void venta(string codigo, double cant, map<string, double> &inventario, map<string, double> &ventas){
	for(map<string,double>::iterator iti = inventario.begin(); iti!=inventario.end(); iti++){
	if(!(iti->first.compare (codigo)==0)&&((iti->second)>=cant)){
		cout<<"error fatal"<<endl;
	}
	else{
	for(map<string,double>::iterator iti = ventas.begin(); iti!=ventas.end(); iti++){
		ventas[codigo];
		ventas[iti->first]=cant;
	  }
    }   for(map<string,double>::iterator iti = inventario.begin(); iti!=inventario.end(); iti++){
	      inventario[codigo];
	      inventario[iti->first]-=cant;
     }
  }
}

		
	
void imprimirInventario(map<string, double> &inventario){
	for(map<string,double>::iterator iti = inventario.begin(); iti!=inventario.end(); iti++){
		cout << " Llave: "<<iti->first<<" valor: "<<iti->second<<endl;
	}
  }
  
  void imprimirVentas(map<string, double> &ventas){
	for(map<string,double>::iterator iti = ventas.begin(); iti!=ventas.end(); iti++){
		cout << " Llave: "<<iti->first<<" valor: "<<iti->second<<endl;
	}
  }
		




int main(){
map<string, double> inventario;
map<string, double> ventas;

	
inventario["papa"]= 10.1;
ventas["papa"]=1;

imprimirInventario(inventario);
     
 agregarProducto("papa",2.1 ,inventario);
     
 agregarProducto("yuca",2.1 ,inventario);
  
venta("papa", 1.3,inventario, ventas);

imprimirInventario(inventario);
	
}


