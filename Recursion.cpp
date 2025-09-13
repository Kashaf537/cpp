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
void displayReverseRecursive(Node* head) {
    if (head == NULL) return; 
    displayReverseRecursive(head->next); 
    cout << head->data << " ";   
}

int main() {
    Node* head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    cout << "Reverse (Recursion): ";
    displayReverseRecursive(head); 
    cout << endl;

    return 0;
}
