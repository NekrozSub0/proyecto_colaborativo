//Algoritmo funcion que retorna el mayor de 3 numeros
#include<iostream>
using namespace std;

//Funcion mayor de 3 numeros
float Mayornumero(float a,float b,float c){
	if (a>b)
		if (a>c)
			return a;
		else 
			return c;
	else 
		if (b>c)
			return b;
		else 
			return c;
}

//Algoritmo principal
int main (){
	//Declaracion de variables
	float Numero1,Numero2,Numero3,NumeroMayor;
	//Entrada
	cout<<"Ingrese el 1er numero: "<<endl;
	cin>>Numero1;
	cout<<"Ingrese el 2do numero: "<<endl;
	cin>>Numero2;
	cout<<"Ingrese el 3er numero: "<<endl;
	cin>>Numero3;
	//Proceso
	NumeroMayor = Mayornumero(Numero1,Numero2,Numero3);
	//Salida
	cout<<"El mayor numero es: "<<NumeroMayor<<endl;
	return 0;
}
