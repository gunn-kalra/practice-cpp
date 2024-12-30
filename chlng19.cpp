#include<iostream>
#include<string>
using namespace std;
int main(){
    string teatypes[3]={"Green tea","Black tea","Lemon tea"};
    for(int i=0;i<3;i++)
    {
        if(i==0)
        continue;
        cout<<"Brewing"<<teatypes[i];
    }
    return 0;
}