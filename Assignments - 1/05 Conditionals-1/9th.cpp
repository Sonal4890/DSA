#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character :";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii >=65 && ascii <= 90) || (ascii >=97 && ascii <= 122)){
        cout<<"given char is an alphabet";
    }
    else if( ascii >= 48 && ascii <= 57){
        cout<<"given char is an digit";
    }
    else{
        cout<<"given char is an special char";
    }
}
