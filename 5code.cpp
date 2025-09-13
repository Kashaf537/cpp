#include <iostream>
using namespace std;


int sumOfDigits(int num){
    // int d1=num/1000;
    // int remnum=num%1000;
    // int d2=remnum/100;
    // int temp=remnum%100;
    // int d3=temp/10;
    // int d4=temp%10;
    // int sum=d1+d2+d3+d4;
    // return sum;

    int sumDigit=0;
    while (num>0)
    {
        int lastDigit=num%10;
        num/=10;
        sumDigit+=lastDigit;
    }
    return sumDigit;
    


}

int main(){
    int n=1234;
    cout<<"sum is "<<sumOfDigits(n);


}