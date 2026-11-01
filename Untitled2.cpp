#include<iostream>
using namespace std;
int main (){
	double units_consumed, price_perunit, total_charrges;
	cout<<"enter electricity units consumed and price of one unit:"<<endl;
	cin>>units_consumed>>price_perunit;
	total_charrges = units_consumed*price_perunit;
	cout<<"total charges :"<<total_charrges<<endl;
	return 0;
}
