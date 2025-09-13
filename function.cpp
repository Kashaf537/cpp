#include <iostream>
using namespace std;

int sum(int a){
    int sum=0;
    for (int i = 1; i <=a; i++)
    {
        sum+=i;
    }
    return sum;
    
}

int main(){
    int x;
    cout<<"Enter the number "<<endl;
    cin>> x;
    int result =sum(x);
    cout<<"The result is "<<result;



}