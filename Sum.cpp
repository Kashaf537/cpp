#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the starting value: ";
    cin >> start;
    cout << "Enter the end value: ";
    cin >> end;

    int sum = 0;

    for (int i = start; i <= end; i++) {   
        sum += pow(i, 2);                
    }

    cout << "Sum is " << sum << endl;

    return 0;
}
