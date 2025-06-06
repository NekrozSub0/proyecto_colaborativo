#include<iostream>
using namespace std;

float Mayornumero(float a,float b,float c){
	if (a>b){
		if (a>c){
			return a;
			} else {
				return c;
		}
	} else {
		if (b>c){
			return b;
			}else {
				return c;
			}
	}
}

int main (){
	float Numero1,Numero2,Numero3,NumeroMayor;
	cout<<"Ingrese el 1er numero: ";
	cin>>Numero1;
	cout<<"Ingrese el 2do numero: ";
	cin>>Numero2;
	cout<<"Ingrese el 3er numero: ";
	cin>>Numero3;
	NumeroMayor = Mayornumero(Numero1,Numero2,Numero3);
	cout<<"El mayor numero es: "<<NumeroMayor<<endl;
	return 0;
}
