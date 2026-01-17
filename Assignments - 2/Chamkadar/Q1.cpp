#include<iostream>
using namespace std;
int main(){
    int num,lastDigit,oddDigit,previousNumber=0,ans=0,count=0,odd=0,temp=1;
    cout<<"Enter num : ";
    cin>>num;
    for(int i=0; num>0; i++){
        lastDigit = num % 10;
        //even calculation
        if(lastDigit % 2 == 0){ 
            count++;
            if(previousNumber != 0){
                if(lastDigit > previousNumber){
                    ans *= 10;
                    ans += lastDigit;
                }
            } 
        }
        //odd calculation
        else{
            if(previousNumber != 0){
                temp = lastDigit * count;
                if (temp >= 10){
                    while (temp > 0){
                        ans *= 10;
                        int odd = temp % 10;
                        ans += odd;
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
    }
    while(ans > 0){
        temp = ans % 10;
        num = (num * 10) + temp;
        ans = ans / 10;
    }
    cout<<"ans :"<<num<<endl;
}