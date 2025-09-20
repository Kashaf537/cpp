#include <iostream>
using namespace std;

void swap(int a ,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}


int main(){
    int num1=4;
    int num2=9;
    swap(num1,num2);
    cout<<"Value in main num1 "<<num1<<endl<<"num2 "<<" "<<num2;
    return 0;
}