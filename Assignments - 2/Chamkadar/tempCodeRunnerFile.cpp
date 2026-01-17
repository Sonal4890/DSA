#include<iostream>
using namespace std;
int main(){
    int num,lastDigit,oddDigit,previousNumber=0,ans=0,count=0,odd=0,temp=1;
    cout<<"Enter num : ";
    cin>>num;
    for(int i=0; num>0; i++){
        lastDigit = num % 10;
        if(lastDigit % 2 == 0){
            count++;
            if(previousNumber != 0){
                if(lastDigit > previousNumber){
                    ans *= 10;
                    ans += lastDigit;
                }
            }
        }
        else{
            if(previousNumber != 0){
                temp = lastDigit * (count-1);
                if (temp >= 10){
                    while (temp > 0){
                        ans *= 10;
                        int last = temp % 10;
                        ans += last;
                        temp /= 10;
                    }
                }
                else{
                    ans = (ans * 10) + temp;
                }
            }                      
        }
        previousNumber = lastDigit;
        num /= 10;