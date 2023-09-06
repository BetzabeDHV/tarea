#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    int radio;

    cout << "Ingresa el radio del círculo (entero): ";
    cin >> radio;

    double diametro = 2.0 * radio;
    double circunferencia = 2.0 * PI * radio;
    double area = PI * radio * radio;

    cout << "Diámetro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Área: " << area << endl;

    return 0;
}
