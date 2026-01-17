#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    bool flag = true;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            flag = false;
        }
    }
    if(n == 1) cout<<"Neither prime or nor composite";
    else if(flag == true) cout<<"Number is prime";
    else cout<<"Number is composite";
}