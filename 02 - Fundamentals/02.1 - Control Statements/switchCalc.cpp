#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"Enter n1 : ";
    cin>>n1;
    cout<<"Enter n2 : ";
    cin>>n2;
    cout<<"Enter operator : ";
    cin>>op;
    switch (op){
        case '+':
            cout<<"Add : "<<n1+n2;
            break;
        case '-':
            cout<<"Sub : "<<n1-n2;
            break;
        case '*':
            cout<<"Multi : "<<n1*n2;
            break;
        case '/':
            cout<<"Div : "<<n1/n2;
            break;
        case '%':
            cout<<"Mod : "<<n1%n2;
            break;
        default:
            cout<<"wrong choice";
            break;
    }

}

