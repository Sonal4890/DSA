#include <iostream>
using namespace std;
int main(){
    float side1,side2,side3,area;
    cout<<"Enter side1 :";
    cin>>side1;
    cout<<"Enter side2 :";
    cin>>side2;
    cout<<"Enter side3 :";
    cin>>side3;
    if(side1==side2 && side2==side3){
        cout<<"Triangle is equilateral";
    }
    else if(side1==side2 || side2==side3){
        cout<<"Triangle is scalene";
    }
    else{
        cout<<"Triangle is isosceles";
    }
}
