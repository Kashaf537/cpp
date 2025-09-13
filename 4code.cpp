#include <iostream>
using namespace std;
int  main(){
    int N=4;
    int fact=1;
    if (N==0|| N==1)
    {
        cout<<"Factorial is 1";
    }else{
        for (int i = 1; i <=N; i++)
        {
            fact*=i;
        }
        
    }
    cout<<"Factorial is "<<fact;

    
    return 0;
}