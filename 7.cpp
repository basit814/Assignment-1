#include <iostream>
using namespace std;
int main() {
    double ageYears,agemonths,ageweeks,agedays;
    cout << "Enter age in years: ";
    cin >> ageYears;
    agemonths = ageYears * 12.0;
    ageweeks = ageYears * 52.0;
    agedays = ageYears * 365.0;
    cout << "Approximate Age in Months: " << agemonths << endl;
    cout << "Approximate Age in Weeks: " << ageweeks << endl;
    cout << "Approximate Age in Days: " << agedays << endl;
    return 0;
}
