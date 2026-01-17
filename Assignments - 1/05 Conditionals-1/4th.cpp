#include <iostream>
using namespace std;
int main(){
    float length,breadth,area,perimeter;
    cout<<"Enter lenght :";
    cin>>length;
    cout<<"Enter breadth :";
    cin>>breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if(perimeter>area){
        cout<<"perimeter is larger";
    }
    else{
        cout<<"area is larger";
    }
}
