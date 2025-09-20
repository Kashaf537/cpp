#include <iostream>
using namespace std;

int increase(int &a){
    a+=10;

}
int main(){
    int num=20;
    increase(num);
    cout<<"Value increase by 10"<<" "<<num<<endl;

    return 0;
}