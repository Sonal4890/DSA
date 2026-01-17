#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter Number : ";
    cin>>n;
    int lastDigit,sum=0;
    while(n>0){
        lastDigit = n%10;
        sum += lastDigit;
        n /= 10;
    }
    cout<<sum;
}