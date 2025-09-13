#include <iostream>
using namespace std;

bool Isprime(int num){
    bool isPrime=true;
    for(int i=2;i*i<=num;i++){
        if (num%i==0)
        {
            isPrime=false;
        }
        
    }
    return isPrime;
}


void printPrime(){
    // print all prime numbers from 2 to n 
    int n=5;
    
    for (int  i = 2; i <n; i++)
    {
        bool result=Isprime(i);
        if (result)
        {
            cout<<i<<" ";
        }
        
    }
    
}

int main(){
    printPrime();

}