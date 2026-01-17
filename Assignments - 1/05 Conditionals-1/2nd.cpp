#include <iostream>
using namespace std;
int main(){
    int area,circumference,radius;
    cout<<"Enter radius :";
    cin>>radius;
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    if(circumference>area){
        cout<<"circumference is larger";
    }
    else{
        cout<<"Area is larger";
    }   
    cout<<endl<<"circumference is : "<<circumference<<endl;
    cout<<"Area is : "<<area;
}
