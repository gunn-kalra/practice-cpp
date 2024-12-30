#include<iostream>
#include<string>
using namespace std;
int main(){
    int tea_cups;
    cout<<"Enter number of teacups";
    cin>>tea_cups;
    bool isstudent;
    cout<<"Are u student(1 for yes 0 for no)";
    cin>>isstudent;
    if(tea_cups>15 || isstudent){
       cout<<"Eligible for discount"<<endl;
    }
    else{
        cout<<"Not eligible for dicount";
    }
    return 0;
}