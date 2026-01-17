#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii >= 65 && ascii <= 90) || (ascii >=97 && ascii <= 122)){
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            cout<<"Given Character is Vowel";
        }
        else{
            cout<<"Given Character is Constant";
        }
    }
    else{
        cout<<"Given Character is Not an Alphabet";
    }
    cout<<endl<<ch;
}