#include <iostream>
using namespace std;

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
    int n;
    cout << "Ingrese un numero del 1 al 5: ";
    cin >> n;

    char vocal = Vocales(n);
    if (vocal != '?')
        cout << "La vocal es: " << vocal << endl;
    else
        cout << "Numero invalido." << endl;

    return 0;
}
