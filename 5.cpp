#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer número entero: ";
    cin >> numero1;

    cout << "Ingrese el segundo número entero: ";
    cin >> numero2;

    bool esImparNumero1 = (numero1 % 2 != 0);
    bool esImparNumero2 = (numero2 % 2 != 0);
    bool esImparSuma = ((numero1 + numero2) % 2 != 0);

    cout << "El primer número (" << numero1 << ") es impar: " << (esImparNumero1 ? "Sí" : "No") << endl;
    cout << "El segundo número (" << numero2 << ") es impar: " << (esImparNumero2 ? "Sí" : "No") << endl;
    cout << "La suma de los números es impar: " << (esImparSuma ? "Sí" : "No") << endl;

    return 0;
}
