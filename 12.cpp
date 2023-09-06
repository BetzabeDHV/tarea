#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double millasPorDia, costoGasolina, promedioMillasPorGalon, tarifasEstacionamiento, peajes;
    
    cout << "Calculadora de costo de conducción diario" << endl;
    
    cout << "Ingrese las millas totales recorridas por día: ";
    cin >> millasPorDia;

    cout << "Ingrese el costo por galón de gasolina: $";
    cin >> costoGasolina;

    cout << "Ingrese el promedio de millas por galón de su vehículo: ";
    cin >> promedioMillasPorGalon;

    cout << "Ingrese las tarifas de estacionamiento por día: $";
    cin >> tarifasEstacionamiento;

    cout << "Ingrese los peajes por día: $";
    cin >> peajes;

    double costoTotal = (millasPorDia / promedioMillasPorGalon) * costoGasolina + tarifasEstacionamiento + peajes;

    cout << fixed << setprecision(2);
    cout << "El costo diario de conducir al trabajo es: $" << costoTotal << endl;

    return 0;
}