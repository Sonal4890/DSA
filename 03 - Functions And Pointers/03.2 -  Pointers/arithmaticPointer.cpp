#include<iostream>
using namespace std;
int main(){
    int a = 5,b = 6, c = 20;
    int* ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;
    ptr1++;
    // ptr2 ++;
    // ptr3 ++;
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3;
    cout<<endl<<endl<<sizeof(ptr1);
}  