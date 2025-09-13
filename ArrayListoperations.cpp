#include <iostream>
using namespace std;

const int SIZE = 100;  
int arr[SIZE];
int n = 0; 

void displayList() {
    if (n == 0) {
        cout << "Array List is empty!\n";
        return;
    }
    cout << "Array List: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertAtEnd(int value) {
    if (n >= SIZE) {
        cout << "Array List is full!\n";
        return;
    }
    arr[n++] = value;
}

void insertAtStart(int value) {
    if (n >= SIZE) {
        cout << "Array List is full!\n";
        return;
    }
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    n++;
}

void insertAfterValue(int key, int value) {
    if (n >= SIZE) {
        cout << "Array List is full!\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            for (int j = n; j > i + 1; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = value;
            n++;
            return;
        }
    }
    cout << "Value " << key << " not found!\n";
}

void insertBeforeValue(int key, int value) {
    if (n >= SIZE) {
        cout << "Array List is full!\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            for (int j = n; j > i; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i] = value;
            n++;
            return;
        }
    }
    cout << "Value " << key << " not found!\n";
}


void deleteFromEnd() {
    if (n == 0) {
        cout << "Array List is empty!\n";
        return;
    }
    n--;
}

void deleteFromStart() {
    if (n == 0) {
        cout << "Array List is empty!\n";
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteSpecificValue(int key) {
    if (n == 0) {
        cout << "Array List is empty!\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            return;
        }
    }
    cout << "Value " << key << " not found!\n";
}

void linearSearch(int key) {
    int i = 0;
    while (i < n) {
        if (arr[i] == key) {
            cout << "Value " << key << " found at index " << i << ".\n";
            return;
        }
        i++;
    }
    cout << "Value " << key << " not found in list!\n";
}

int main() {
    int choice, value, key;

    do {
        cout << "\n========= Array List Menu =========\n";
        cout << "1. Insert value at end\n";
        cout << "2. Insert value at start\n";
        cout << "3. Insert value after specific value\n";
        cout << "4. Insert value before specific value\n";
        cout << "5. Display array list\n";
        cout << "6. Delete value from end\n";
        cout << "7. Delete value from start\n";
        cout << "8. Delete specific value\n";
        cout << "9. Search value (Linear Search using while loop)\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertAtEnd(value);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertAtStart(value);
                break;
            case 3:
                cout << "Enter value after which to insert: ";
                cin >> key;
                cout << "Enter value to insert: ";
                cin >> value;
                insertAfterValue(key, value);
                break;
            case 4:
                cout << "Enter value before which to insert: ";
                cin >> key;
                cout << "Enter value to insert: ";
                cin >> value;
                insertBeforeValue(key, value);
                break;
            case 5:
                displayList();
                break;
            case 6:
                deleteFromEnd();
                break;
            case 7:
                deleteFromStart();
                break;
            case 8:
                cout << "Enter value to delete: ";
                cin >> key;
                deleteSpecificValue(key);
                break;
            case 9:
                cout << "Enter value to search: ";
                cin >> key;
                linearSearch(key);
                break;
            case 10:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 10);

    return 0;
}
