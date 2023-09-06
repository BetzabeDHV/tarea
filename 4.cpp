#include <iostream>
using namespace std;

int main() {
    int numero;
    int numeroMasGrande;
    int numeroMasPequeno;

    cout << "Ingrese el primer número: ";
    cin >> numero;

    numeroMasGrande = numero;
    numeroMasPequeno = numero;

    cout << "Ingrese el segundo número: ";
    cin >> numero;

    if (numero > numeroMasGrande) {
        numeroMasGrande = numero;
    } else if (numero < numeroMasPequeno) {
        numeroMasPequeno = numero;
    }

    cout << "Ingrese el tercer número: ";
    cin >> numero;

    if (numero > numeroMasGrande) {
        numeroMasGrande = numero;
    } else if (numero < numeroMasPequeno) {
        numeroMasPequeno = numero;
    }

    cout << "Ingrese el cuarto número: ";
    cin >> numero;

    if (numero > numeroMasGrande) {
        numeroMasGrande = numero;
    } else if (numero < numeroMasPequeno) {
        numeroMasPequeno = numero;
    }

    cout << "Ingrese el quinto número: ";
    cin >> numero;

    if (numero > numeroMasGrande) {
        numeroMasGrande = numero;
    } else if (numero < numeroMasPequeno) {
        numeroMasPequeno = numero;
    }

    cout << "El número más grande es: " << numeroMasGrande << endl;
    cout << "El número más pequeño es: " << numeroMasPequeno << endl;

    return 0;
}