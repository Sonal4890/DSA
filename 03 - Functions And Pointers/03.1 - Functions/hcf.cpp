#include<iostream>
using namespace std;
int hcf(int x, int y){
    int hcf = 1;
    for(int i=1; i<=min(x,y); i++){
        if(x%i==0 && y%i==0){
            hcf = i;
        }
    }
    return hcf;
}
int main(){
    int x,y;
    cout<<"enter x and y :";
    cin>>x>>y;
    cout<<hcf(x,y); 
}