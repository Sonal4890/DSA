#include <iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter value of x:";
    cin>>x;
    cout<<"Enter value of y:";
    cin>>y;
    if(x==0 && y == 0){
        cout<<"Point lies on origin";
    }
    else if(x == 0 && y != 0){
        cout<<"Point lies on x-axis";
    }
    else if(x != 0 && y == 0){
        cout<<"Point lies on y-axis";
    }
    else{
        cout<<"Point lies on Plane";
    }  
}
