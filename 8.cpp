#include <iostream>
using namespace std;
int main() {
    double length, width, height;
    cout << "Enter length, width and hieght of the tank (meters): ";
    cin >> length>>width>>height;
    double volume = length * width * height;
    double capacityLitres = volume * 1000.0;
    cout << "Volume in cubic meters: " << volume << " m^3" << endl;
    cout << "Capacity in litres: " << capacityLitres << " litres" << endl;
    return 0;
}
