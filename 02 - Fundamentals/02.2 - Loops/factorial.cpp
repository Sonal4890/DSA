#include<iostream>
using namespace std;
int main(){
    int n,i=1,fac=1;
    cout<<"Enter Number : ";
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     fac *= i;
    // }
    while(i<=n){
        fac *= i;
        i++;
    }
    cout<<fac;
}