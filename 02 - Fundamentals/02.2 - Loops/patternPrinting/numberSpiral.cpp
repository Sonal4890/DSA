#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // without using the min() function 
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int a = i, b = j;
            if(a>n){
                a = 2*n - i;
            }
            if(b>n){
                b = 2*n - j;
            }
            // try if(a>b)......
            if(a<b){
                int x = a;
                cout<< n - x + 1<<" ";
            }
            else{
                int y = b;
                cout<< n - y + 1<<" ";
            }
        }
    cout<<endl;   
    }
}