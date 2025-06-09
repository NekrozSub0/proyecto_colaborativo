#include<iostream>
using namespace std;

int main(){
	int SB,V1,V2,V3,DC,TD;
	cout<<"Ingrese Sueldo base: ";
	cin>> SB;
	if (SB>0){
		cout<<"Ingrese Venta 1: ";
	    cin>> V1;
	    if (V1>0){
	    	cout<<"Ingrese Venta 2: ";
	        cin>> V2;
	        if (V2>0){
	        	cout<<"Ingrese Venta 3: ";
	            cin>> V3;
	            if (V3>0){
	            	DC=(V1+V2+V3)*0.01;
	                TD=SB+DC;
	                cout<<"Dinero de las comisiones a un 10%: " << DC <<endl;
	                cout<<"Total del dinero a recibir: " << TD << endl;
				} else {
					cout <<"Datos no validos";
				}
			} else {
				cout <<"Datos no validos";
			}
		} else {
			cout <<"Datos no validos";
		}
	} else {
		cout <<"Datos no validos";
	}
	
	return 0;
}
