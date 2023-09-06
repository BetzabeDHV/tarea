#include <iostream>
using namespace std;

int main() {
    cout << "Face Length of Cube (cm)\tSurface Area of Cube (cm^2)\tVolume of Cube (cm^3)" << endl;

    for (int faceLength = 0; faceLength <= 4; faceLength++) {
        int surfaceArea = 6 * faceLength * faceLength;
        int volume = faceLength * faceLength * faceLength;

        cout << faceLength << "\t\t\t\t" << surfaceArea << "\t\t\t\t\t" << volume << endl;
    }

    return 0;
}
