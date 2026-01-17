#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int ascii = (int)ch;
    /* not this way..........
    for(int i=1; i<=26; i++){
        cout<<ch<<" : "<<ascii<<endl;
        ch++;
        ascii++;
    }
    */
    
    for(int i=65; i<=90; i++){
        cout<<(char)i<<" : "<<i<<endl;
    }
}