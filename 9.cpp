#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un número entero de cuatro dígitos: ";
    cin >> numero;

    if (numero >= 1000 && numero <= 9999) {
        int digito1 = numero % 10;        // Obtiene el último dígito
        int digito2 = (numero / 10) % 10; // Obtiene el tercer dígito
        int digito3 = (numero / 100) % 10; // Obtiene el segundo dígito
        int digito4 = numero / 1000;      // Obtiene el primer dígito

        cout << "Los dígitos en orden inverso son: " << digito1 << "  " << digito2 << "  " << digito3 << "  " << digito4 << endl;
    } else {
        cout << "El número ingresado no es de cuatro dígitos." << endl;
    }

    return 0;
}
