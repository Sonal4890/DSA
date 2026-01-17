#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // using extra variable
    int num=1;
    for(int i=1; i<=2*n-1; i++)
    cout<<i;
    cout<<endl;

    for(int i=1; i<=n; i++){
        for(int j=n-1; j>=i; j--){
            cout<<num;
            num++;
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<" ";
            num++;
        }
        for(int q=n-1; q>=i; q--){
            cout<<num;
            num++;
        }
        num=1;
    cout<<endl;   
    }
}