#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Calculadora de Frecuencia Cardíaca Máxima (FCM)" << endl;
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Fórmula 1: MHR = 220 - edad
    int mhr1 = 220 - edad;

    // Fórmula 2: MHR = 208 - 0.7 * edad
    double mhr2 = 208.0 - 0.7 * edad;

    // Fórmula 3: MHR = 211 - 0.64 * edad
    double mhr3 = 211.0 - 0.64 * edad;

    cout << "Valores de FCM sugeridos:" << endl;
    cout << "Fórmula 1 (220 - edad): " << mhr1 << " BPM" << endl;
    cout << "Fórmula 2 (208 - 0.7 * edad): " << mhr2 << " BPM" << endl;
    cout << "Fórmula 3 (211 - 0.64 * edad): " << mhr3 << " BPM" << endl;

    // Rango de valores considerando los valores más pequeños y más grandes
    int minMHR = min(mhr1, min(static_cast<int>(mhr2), static_cast<int>(mhr3)));
    int maxMHR = max(mhr1, max(static_cast<int>(mhr2), static_cast<int>(mhr3)));

    cout << "Rango de valores de FCM a considerar: " << minMHR << " BPM - " << maxMHR << " BPM" << endl;

    return 0;
}
