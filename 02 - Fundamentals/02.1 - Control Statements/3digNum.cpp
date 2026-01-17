#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num :";
    cin>>num;
    if(num >= 100 && num <= 999){
        cout<<num<<" is three digit numeber.";
    }
    else{
        cout<<num<<" is not a three digit numeber.";
    } 
}