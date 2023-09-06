#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3;

    cout << "Ingrese el primer número entero: ";
    cin >> numero1;

    cout << "Ingrese el segundo número entero: ";
    cin >> numero2;

    cout << "Ingrese el tercer número entero: ";
    cin >> numero3;

    bool sonFactores = (numero2 % numero1 == 0) && (numero2 % numero3 == 0);

    cout << "Los dos primeros números (" << numero1 << " y " << numero2 << ") son factores del tercer número (" << numero3 << ")?: " << (sonFactores ? "Sí" : "No") << endl;

    return 0;
}
