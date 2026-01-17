#include<iostream>
using namespace std;
int main(){
    int per;
    cout<<"Enter the per : ";
    cin>>per;
    if(per >= 91 && per <= 100){
        cout<<"Excellent";
    }
    else if(per >= 81  && per <= 90 ){
        cout<<"Very Good";
    }
    else if(per >= 71  && per <= 80 ){
        cout<<"Good";
    }
    else if(per >= 61  && per <= 70 ){
        cout<<"Can do better";
    }
    else if(per >= 51  && per <= 60 ){
        cout<<"Average";
    }
    else if(per >= 41  && per <= 50 ){
        cout<<"Below Average";
    }
    else if(per <= 40 ){
        cout<<"Fail";
    }
    else{
        cout<<"Invalid Percentage";
    } 
}

