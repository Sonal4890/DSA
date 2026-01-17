#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter num cost price:";
    cin>>cp;
    cout<<"Enter num selling price:";
    cin>>sp;
    if(sp>cp){
        cout<<"total profit is : "<<sp-cp;
    }
    else if(sp==cp){
        cout<<"sp and cp are same ";
    }
    else{
        cout<<"total loss is : "<<cp-sp;
    }
    
}