#include<iostream>
using namespace std;
int swap(){
    int a,b;
    cout<<"enter a and b :";
    cin>>a>>b;
    // int c;
    // c = a;
    // a = b;
    // b = c;
    // cout<<"value of a : "<<a<<endl;
    // cout<<"value of b : "<<b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b;
}
int main(){
    swap();
}