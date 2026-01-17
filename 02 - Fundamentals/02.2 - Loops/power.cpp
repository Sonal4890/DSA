#include<iostream>
using namespace std;
int main(){
    int a,b,n;
    float power = 1;
    bool flag = true;
    cout<<"Enter Base a : ";
    cin>>a;
    cout<<"Enter Exponent b : ";
    cin>>b;
    if(b<0){
        flag = false;
        b = -b;
    }
    for(int i=1; i<=b; i++){
        power *= a;
    }
    if(flag == false){
        power = 1/power;
        b =-b;
    }
    if( a == 0 && b == 0) cout<<"Not defined";
    else cout<<" base = "<<a<<" Exponent = "<<b<<" \n Power = "<<power;
}