#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double peso, altura;

    cout << "Calculadora de IMC (Índice de Masa Corporal)" << endl;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    double imc = peso / (altura * altura);

    cout << fixed << setprecision(2);
    cout << "Su IMC es: " << imc << endl;

    cout << "VALORES DEL IMC" << endl;
    cout << "Peso insuficiente: menos de 18.5" << endl;
    cout << "Normal: entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: entre 25 y 29.9" << endl;
    cout << "Obeso: 30 o más" << endl;

    if (imc < 18.5) {
        cout << "Estado: Peso insuficiente" << endl;
    } else if (imc >= 18.5 && imc <= 24.9) {
        cout << "Estado: Normal" << endl;
    } else if (imc >= 25.0 && imc <= 29.9) {
        cout << "Estado: Sobrepeso" << endl;
    } else {
        cout << "Estado: Obeso" << endl;
    }

    return 0;
}
