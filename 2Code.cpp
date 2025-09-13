#include <iostream>
using namespace std;
int main(){
    int n=10;
    int sumEven=0;
    int i=1;
    while (i<=n)
    {
        if (i%2==0)
        {
            sumEven+=i;
        }
        i++;
        
    }
    cout<<"Sum of even numbers is "<<sumEven;
    

    return 0;
}