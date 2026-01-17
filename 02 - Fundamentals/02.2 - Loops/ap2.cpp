#include<iostream>
using namespace std;
int main(){
    int a=100,n;
    cout<<"enter num : ";
    cin>>n;
    // 100,97,94,91,88.........
    for(int i=1; a>0; i++){
        cout<<a<<endl;
        a-=3;
    }
}