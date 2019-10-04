
#include<iostream>


using namespace std;

//Nombre : German Daniel Rojas



int main(){
	
	
	int numeroNotas;
	
	
	cout<<"Ingrese el numero de notas que desea digitar"<<endl;
	
	cin>>numeroNotas;
	
	
	int iterator=0;
	
	float sumaNotas, nota, promedio;
	
	
	while(iterator<numeroNotas){
		
		
	cout<<"Ingrese la nota numero: "<<(iterator+1)<<endl;
	
	cin>>nota;
	
	sumaNotas=sumaNotas+nota;	
		
		
		
	iterator++;	
		
	}
	
	promedio=sumaNotas/numeroNotas;
	
	
	cout<<"el promedio de las notas ingresadas fue de:"<<promedio<<endl;
	
	
	
	
	
	
	
	
	
	
}
