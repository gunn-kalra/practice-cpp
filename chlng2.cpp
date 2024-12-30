#include<iostream>
#include<string>
using namespace std;
int main(){
    float teaprice;
    cin>>teaprice;
    teaprice=(0.1*teaprice)+teaprice;
   cout<<(int)teaprice;
    return 0;
}