#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter the number : ";
    cin>>x;
    int y = (int)x;
    cout<<"value of y = "<<y<<endl;
    if (y<0) y -= 1;
    float z = (float) y;
    x = x - z;
    cout<<x;
}