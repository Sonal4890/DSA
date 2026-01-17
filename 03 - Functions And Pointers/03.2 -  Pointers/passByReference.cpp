#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a = 5,b = 6;
    int* ptr1 = &a;
    int *ptr2 = &b;
    swap(ptr1, ptr2);
    cout<<a<<" "<<b;
}