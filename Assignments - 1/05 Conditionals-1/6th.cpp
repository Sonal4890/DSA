#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter Merks of a:";
    cin>>a;
    cout<<"Enter Merks of b:";
    cin>>b;
    cout<<"Enter Merks of c:";
    cin>>c;
    if(a<b && a<c){
        cout<<"a has least marks";
    }
    else if(b<a && b<c){
        cout<<"b has least marks";
    }
    else{
        cout<<"c has least marks";
    }  
}
