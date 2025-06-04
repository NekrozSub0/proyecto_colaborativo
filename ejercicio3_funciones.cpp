//Algoritmo Calcular si es primo
#include <iostream>
using namespace std;

//Funcion Calcular si es primo
int calculo_primo(int num){
	int i=1, divc=0;
	//Proceso Funcion
	while (i <= num && divc<=2){
		if (num % i == 0){
			divc = divc + 1;
		}
		i = i + 1;
	}
	//Salida Funcion
	if (divc == 2) {
		return true;
	} else{
		return false;
	}
}
//Algoritmo Principal
int main(){
	int num;
	bool esPrimo;
	//Entrada
	cout<<"Ingrese el numero a evaluar: "<<endl;
	cin>>num;
	//Proceso
	esPrimo = calculo_primo(num);
	//Salida
	if(esPrimo==true){
		cout<<"El numero es primo"<<endl;
	} else {
		cout<<"El numero no es primo"<<endl;
	}
	return 0;
}
