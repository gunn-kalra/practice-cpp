#include<iostream>
#include<string>
using namespace std;
int main(){
    int ch;
    double price;
    cout<<"Select your tea\n";
    cout<<"1.Green Tea\n";
    cout<<"2.Lemon Tea\n";
    cout<<"3.Oolong Tea\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        price=2.0;
        cout<<"Green tea price"<<price;
        break;
        case 2:
        price=3.0;
        cout<<"Lemon tea price"<<price;
        break;
        case 3:
        price=4.0;
        cout<<"oolong tea price"<<price;
        break;
        default:
        cout<<"Invalid choice";
    }
    return 0;
}