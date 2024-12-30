#include<iostream>
#include<string>
using namespace std;
int main(){
    int currenthr;
    cout<<"Enter current hour(0-23)";
    cin>>currenthr;
    if(currenthr>=8 && currenthr<=18){
       cout<<"Shop is open"<<endl;
    }
    else{
        cout<<"Shop is closed";
    }
    return 0;
}