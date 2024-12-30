#include<iostream>
#include<string>
using namespace std;
int main(){
    int tea_cups,totalprice,pricepercup=2;
    double discount;
    cout<<"Enter number of teacups";
    cin>>tea_cups;
    totalprice=tea_cups*pricepercup;
    if(tea_cups>=20){
       cout<<"Discount offered 20%"<<endl;
       discount=0.20;
    }
    else if(tea_cups>=10){
        cout<<"Dicounts offered 10%";
        discount=0.10;
    }
    else{
     cout<<" No Dicounts offered";
     discount=0;}
    totalprice-=discount;
    cout<<"Final price is"<<totalprice;
    return 0;
}