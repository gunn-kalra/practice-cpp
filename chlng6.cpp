#include<iostream>
#include<string>
using namespace std;
int main(){
    int tea_cups;
    cout<<"Enter number of teacups";
    cin>>tea_cups;
    if(tea_cups>=20){
       cout<<"U get a gold badge"<<endl;
    }
    else if(tea_cups>=10)
    {
        cout<<"U get a silver badge"<<endl;
    }
    else{
        cout<<"U get no badge";
    }
    return 0;
}