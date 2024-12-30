#include<iostream>
#include<string>
using namespace std;
int main(){
    string fav_tea;
    cout<<"Enter favourite tea";
    getline(cin,fav_tea);
    int tea_cups;
    cout<<"Enter number of cups";
    cin>>tea_cups;
    cout<<"Your favourite tea is\t"<<fav_tea<<"\n";
    cout<<"Number of cups u want\t"<<tea_cups<<"\n";
    return 0;
}