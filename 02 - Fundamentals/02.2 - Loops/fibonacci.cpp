#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,i=1,n,sum=0;
    cout<<"Enter Number : ";
    cin>>n;
    while(i<=n-2){
        sum = a + b;
        a = b;
        b = sum;
        i++;
    }
    cout<<b;
}