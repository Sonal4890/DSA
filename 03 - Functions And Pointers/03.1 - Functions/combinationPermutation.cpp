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
    int comb = fact(n)/ (fact(r) * fact(n-r));
    return comb;
}
int permutation(int n, int r){
    int perm = fact(n)/ fact(n-r);
    return perm;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;
    int comb = combination(n,r);
    int perm = permutation(n,r);
    cout<<"Combination : "<<comb<<endl;
    cout<<"Permutation : "<<perm;
}