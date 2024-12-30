#include<iostream>
#include<string>
using namespace std;
int main(){
    int tea_packs;
    double totalprice,finalprice;
    cout<<"Enter number of tea packs";
    cin>>tea_packs;
    double price_perpack;
    cout<<"Enter price per pack";
    cin>>price_perpack;
    totalprice=tea_packs*price_perpack;
   finalprice=(0.1*totalprice)+totalprice;
   cout<<"Final price after tax is"<<finalprice;
    return 0;
}