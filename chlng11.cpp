#include<iostream>
#include<string>
using namespace std;
int main(){
    string teaorder;
    cout<<"Enter your tea order";
    getline(cin,teaorder);
    if(teaorder=="Green Tea"){
       cout<<"You have ordered green tea";
    }
    return 0;
}