#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void agregarEmpleado(int cedula, map<int, double >&empleado ){
	for(map<int,double>::iterator iti = empleado.begin(); iti!=empleado.end(); iti++){
		 if(iti->first == cedula){
			 cout<< "el empleado ya existe"<<endl;
			 		 
			 }
			 else{
				 empleado[cedula]= 0.0;
				 }
	}
}

void vender(string codigo,int cedula, double totalventa, map<string, double>&Ventas, map<int, double >&empleado){
	for(map<int,double>::iterator iti = empleado.begin(); iti!=empleado.end(); iti++){
		 if(iti->first == cedula){
			 empleado[cedula]+=totalventa;
			 for(map<string,double>::iterator iti = Ventas.begin(); iti!=Ventas.end(); iti++){
			    if(iti->first.compare(codigo)==0){
					Ventas[iti->first]= totalventa;
				}
				else{
					Ventas[codigo]+=totalventa;
				}
			}
		}
		else{
			cout<<"el empleado no existe!"<<endl;
		}
	}
}




void imprimirempleado(map<int, double> &empleado){
	for(map<int,double>::iterator iti = empleado.begin(); iti!=empleado.end(); iti++){
		cout << " cedula: "<<iti->first<<" cantidad: "<<iti->second<<endl;
	}
  }
  
void imprimirventas(map<string, double> &ventas){
	for(map<string,double>::iterator iti = ventas.begin(); iti!=ventas.end(); iti++){
		cout << " codigo: "<<iti->first<<" total venta: "<<iti->second<<endl;
	}
  }  


int main(){
map<int, double>empleado;
map<string, double>Ventas;

empleado[116277838]=10.0;

agregarEmpleado(116277938,empleado);
imprimirempleado(empleado);

Ventas["zapatos"]=2.0;
vender("zapatos",1163277938,4.0, Ventas, empleado);

}
