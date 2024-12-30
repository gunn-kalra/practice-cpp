#include<iostream>
#include<string>
using namespace std;
int main(){
    int tea_bags;
    cout<<"Enter number of teabags";
    cin>>tea_bags;
    if(tea_bags<20){
       tea_bags+=10;
       cout<<"Updated tea bags"<<tea_bags;
    }
    else
    {
        cout<<"total tea bags"<<tea_bags;
    }
    return 0;
}