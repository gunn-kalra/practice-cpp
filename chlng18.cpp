#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;
    while(true){
    cout<<"Do u want more tea(stop to exit)";
    getline(cin,response);
    if(response=="stop")
    break;
    }
    cout<<"No more tea for u";
    return 0;
}