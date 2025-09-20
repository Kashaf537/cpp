#include <iostream>
using namespace std;


int Double(int* a){
    *a=(*a)*2;
}
int main(){
    int num=6;
    Double(&num);
    cout << "Doubled Value: " << num << endl;
    return 0;
}