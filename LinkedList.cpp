#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void displayReverseLoop(Node* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    int* arr = new int[count];
    temp = head;
    for (int i = 0; i < count; i++) {
        arr[i] = temp->data;
        temp = temp->next;
    }

    cout << "Reverse (Loop): ";
    for (int i = count - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; 
}

int main() {
    Node* head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    displayReverseLoop(head); 

    return 0;
}
