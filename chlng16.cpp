#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;
    do
    {
    cout<<"Do u want more tea y or n";
    cin>>response;
    }while(response=="y");
    return 0;
}