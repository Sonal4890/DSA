#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter Number : ";
    cin>>n;
    int lastDigit,r=0;
    while(n>0){
        r*=10;
        lastDigit = n%10;
        r += lastDigit;
        n /= 10;
    }
    cout<<r;
}