#include <iostream>
using namespace std;

int square(int x) {
    return x * x; 
}

int main() {
    int num = 6;
    cout << "Square: " << square(num) << endl;
    cout << "Original number: " << num << endl;
    return 0;
}
