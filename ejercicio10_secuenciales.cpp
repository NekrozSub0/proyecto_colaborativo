#include <iostream>
using namespace std;
int main ()
{
    int n, suma;
    cout<<"====SE CALCULARA LA SUMA DE LOS N PRIMEROS NUMEROS===\n";
    cout<<"Ingrese un valor para n: "; cin>>n;
    suma = n*(n+1)/2;
    cout<<"La suma de los "<<n<<" primeros numeros es: "<<suma<<endl;
    return 0;
}