#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2; i<=x; i++){
        f *= i;
    }
    return f;
}
int combination(int n, int r){
    int comb = fact(n) / (fact(r) * fact(n-r));
    return comb;
}
int main(){
    int num;
    cout<<"Enter Num : ";
    cin>>num;
    for(int i=0; i<=num; i++){
        for(int k=1; k<=num-i; k++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            int n = i, r = j;
            int result = combination(n,r);
            cout<<result<<" ";
        }
    cout<<endl;
    }
    /*
    for(int i=0; i<=num; i++){
        int curr =1;
    for(int j=0; j<=i; j++){
        cout<<curr<<" ";
        curr = curr * (i-j)/(j+1);
    }
    cout<<endl;
    }
    */
}