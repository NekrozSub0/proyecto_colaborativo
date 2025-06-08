#include<iostream>
using namespace std;

int main(){
	int SB,V1,V2,V3,DC,TD;
	cout<<"Ingrese Sueldo base: ";
	cin>> SB;
	cout<<"Ingrese Venta 1: ";
	cin>> V1;
	cout<<"Ingrese Venta 2: ";
	cin>> V2;
	cout<<"Ingrese Venta 3: ";
	cin>> V3;
	DC=(V1+V2+V3)*0.01;
	TD=SB+DC;
	cout<<"Dinero de las comisiones a un 10%: " << DC <<endl;
	cout<<"Total del dinero a recibir: " << TD << endl;
	return 0;
}
