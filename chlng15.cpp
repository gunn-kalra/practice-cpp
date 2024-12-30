#include<iostream>
#include<string>
using namespace std;
int main(){
    int tea_cups;
    cout<<"Enter number of teacups";
    cin>>tea_cups;
    while(tea_cups>0)
    {
        cout<<tea_cups<<"Remaining\n";
    tea_cups--;
    }
    cout<<"All tea cups served";
    return 0;
}