#include<iostream>
#include<string>
using namespace std;
int main(){
    int tea_cups;
    cout<<"Enter number of teacups";
    cin>>tea_cups;
    bool ismember;
    cout<<"Are u member for more than a year(1 for yes 0 for no)";
    cin>>ismember;
    if(tea_cups>12 || ismember){
       cout<<"Eligible for discount"<<endl;
    }
    else{
        cout<<"Not eligible for dicount";
    }
    return 0;
}