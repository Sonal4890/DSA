#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num : ";
    cin>>num;
    if( num%5 == 0 && num%3 == 0){
        cout<<"Divisable By 5 and 3";
    }
    else{
        cout<<"Not Divisable By 5 and 3";
    }
}
