
#include<iostream>


//Nombre: German Daniel Rojas




using namespace std;


int main(){
	

int aprobado=1;



while(aprobado==1){

	
	float nota1, nota2, nota3, nota4;
	
	
	
	cout<<"ingrese la nota numero 1 por favor"<<endl;
	
	cin>>nota1;
	
	
	cout<<"ingrese la nota numero 2 por favor"<<endl;
	
	cin>>nota2;	
	
	
		
	cout<<"ingrese la nota numero 3 por favor"<<endl;
	
	cin>>nota3;
	
		
	cout<<"ingrese la nota numero 4 por favor"<<endl;
	
	cin>>nota4;




   float promedio=0;
   
   
   promedio=(nota1+nota2+nota3+nota4)/4;
   
   
   cout<<"el promedio de las notas fue de: "<<promedio<<endl;
   

if((promedio>=3.5)&&(promedio<=5)){
	
	cout<<"aprobado"<<endl;
	
}else{

   if((promedio>=3)&&(promedio<3.5)){
   	
   	cout<<"En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar."<<endl;
   	
   }else{
   	
   	if(promedio<3){
	cout<<"No aprobado"<<endl;
	   }
   	
   }
}
   
 
cout<<endl;

cout<<"desea  digitar  las  notas  de  otro estudiante"<<endl;

cout<<"presione  1 si desea continuar o 0 si desea terminar el programa "<<endl;

cin>>aprobado;

 
}
	
	
	
}
