
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter Number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            count += i;
        }
        else{
            count -= i;
        }
    }
    cout<<"Sum is : "<<count;
}