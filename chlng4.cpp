#include<iostream>
#include<string>
using namespace std;
int main(){
    int tea_cups;
    double totalprice,discountedprice;
    cout<<"Enter number of cups";
    cin>>tea_cups;
    double price_percup;
    cout<<"Enter price per cup";
    cin>>price_percup;
    totalprice=tea_cups*price_percup;
    if(totalprice>100){
        discountedprice=((5/100)*totalprice)+totalprice;
        cout<<"Discounted price is:"<<discountedprice;
    }
    else
    {
        cout<<"Total price is:"<<totalprice;
    }
    return 0;
}