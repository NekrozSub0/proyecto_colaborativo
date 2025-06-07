//el problema nos pide calcular la nota final de un estudiante 
//iniciamos colocando nuestro include<iostream>
#include <iostream>
using namespace std;

//en esta parte podemos obsevar funcion llamada nota final que tiene el dato tipo double 
 
double nota_final (double g,double q,double r){
	
	//en el cual se retornara la suma de la nota de conocimiento multiplicado son su respectivo porcentaje con la de desempeño y su porcentaje  y 
	//producto con su porcentaje
	
	return (g*0.4)+(q*0.35)+(r*0.25) ;
}


//en esta parte encontramos nuestro funcion principal que tiene como tipo de dato un double

int main(){
	
	double c, d, s, f;
	
	//pedimos al usuario que nos introduzca si nota de conocimiento, desempeño y producto 
	
	cout<<ingrese su nota de conocimiento <<endl;
	cin>> c;
	
	cout<<ingrese su nota de desempeño <<endl;
	cin>> d;
	
	cout<<ingrese su nota de producto <<endl;
	cin>> s;
	
	// guardamos el resultado obtenido por nuestra funcion(nota_final) en una variable f
	
	f= nota_final(c,d,s) ;
	
	//como dato de salida el usuario obtendra su nota final del curso
	
	cout<< f ;
	
	return 0;
		
}
