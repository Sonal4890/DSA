#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int ch1 = (int)ch;
    if(ch1>=65 && ch1<=90 || ch1 >= 97 && ch1 <= 122){
        cout<<"given char is alphabet";
    }
    else{
        cout<<"given char is not alphabet";
    }
    
}
