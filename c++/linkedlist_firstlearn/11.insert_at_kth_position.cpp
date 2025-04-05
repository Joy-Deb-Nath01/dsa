#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Step 1: Create some nodes
    Node* n1 = new Node();
    n1->data = 10;
    n1->next = nullptr;

    Node* n2 = new Node();
    n2->data = 20;
    n2->next = nullptr;

    Node* n3 = new Node();
    n3->data = 30;
    n3->next = nullptr;

    // Link the nodes together
    n1->next = n2;
    n2->next = n3;

    // Step 2: Set the head pointer
    Node* head = n1;

    // Step 3: Create a new node to insert at position k (let's insert at 2nd position)
    Node* newNode = new Node();
    newNode->data = 15;
    newNode->next = nullptr;

    int k = 3; // We want to insert at the 2nd position (1-based index)
    Node* current = head;
    
    // Step 4: Traverse to the (k-1)-th node
    for (int i = 1; i < k - 1; i++) {
        current = current->next;  // Move to the next node
    }

    // Step 5: Insert the new node at position k
    newNode->next = current->next;  // Point the new node to the next of the current node
    current->next = newNode;        // Point the current node to the new node

    // Step 6: Traverse and print the list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
