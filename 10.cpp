#include <iostream>
using namespace std;

int main() {
    long long total_Seconds,hours, minutes, seconds,seconds_remaining;
	cout << "Enter total number of seconds: ";
    cin >> total_Seconds;
	hours = total_Seconds / 3600;
    minutes = seconds_remaining / 60;
    seconds = seconds_remaining % 60;
    seconds_remaining = total_Seconds % 3600;
    cout << total_Seconds << " seconds = "<<endl; 
    cout<< " hour(s), "<< hours<<endl; 
    cout << " minute(s) "<< minutes<<endl; 
    cout << " second(s)."<< seconds << endl;
	return 0;
}
