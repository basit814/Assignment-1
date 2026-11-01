#include<iostream>
using namespace std;
int main(){
	int com,phy,che,urdu,math, total_marks;
	float average, percentage;
	cout<<"enter your marks in com, phy, che, urdu and math:"<<endl;
	cin>>com>>phy>>che>>urdu>>math;
	total_marks= com+phy+che+urdu+math;
	average=total_marks/5;
	percentage= (total_marks/500)*100;
	cout<<"total marks:"<<total_marks<<endl;
	cout<<"average:"<<average<<endl;
	cout<<"percentage:"<<percentage<<endl;
	return 0;
}
