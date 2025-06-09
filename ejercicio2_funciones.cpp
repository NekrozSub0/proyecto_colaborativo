#include <iostream> //Si las vocales se representan con números del 1 al 5 (1 para 'a', 2 para 'e', 3 para 'i', 4 para 'o', 5 para 'u'), lea un numero e indique que vocal es.

using namespace std;
//Funcion
char Vocales(int numero) {
    switch (numero) {
        case 1: return 'a';
        case 2: return 'e';
        case 3: return 'i';
        case 4: return 'o';
        case 5: return 'u';
        default: return '?';
    }
}

int main() {
	//Entradas
    int n;
    cout << "Ingrese un numero del 1 al 5: ";
    cin >> n;
    //Procesos
    char vocal = Vocales(n);
    if (vocal != '?')
        //Salidas
        cout << "La vocal es: " << vocal << endl;
    else
        cout << "Numero invalido." << endl;

    return 0;
}
