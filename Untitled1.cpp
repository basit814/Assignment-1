#include<iostream>
using namespace std;
int main(){
    double price_notebook, price_pen, total;
    int qtynotebook, qtypen;
    cout<<"enter price of notebook and pen:"<<endl;
    cin>>price_notebook>>price_pen;
    cout<<"enter quality of notebook and pen:"<<endl;
    cin>>qtynotebook>>qtypen;
    total= (price_notebook*qtynotebook)+(price_pen*qtypen);
    cout<<"total bill is ="<<total<<endl;
    return 0;
}
