#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // for(int j=65; j<=68; j++){
        //         cout<<" "<<(char)j;
        // }
        for(int j=1; j<=n; j++){
                cout<<" "<<(char)(j+64);
        }
    cout<<endl;
    }
}