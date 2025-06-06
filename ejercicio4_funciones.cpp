#include<bits/stdc++.h>
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
	float N1,N2,N3,NM;
	cout<<"Ingrese el 1er numero: ";
	cin>>N1;
	cout<<"Ingrese el 2do numero: ";
	cin>>N2;
	cout<<"Ingrese el 3er numero: ";
	cin>>N3;
	NM = Mayornumero(N1,N2,N3);
	cout<<"El mayor numero es: "<<NM<<endl;
	return 0;
}
