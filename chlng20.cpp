#include<iostream>
#include<string>
using namespace std;
int main(){
    string teatypes[3]={"Green tea","Black tea","Lemon tea"};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
        cout<<"\tBrewing\t"<<teatypes[i];
        }
        cout<<"\n";
    }
    return 0;
}