#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num : ";
    cin>>num;
    if( (num%5 == 0 || num%3 == 0) && num%15 != 0){
        cout<<"Divisable By 3 or 5 but not 15";
    }
    else{
        cout<<"wrong choice";
    }
}
