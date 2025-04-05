#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Step 1: Create the first 3 nodes
    Node* n1 = new Node();
    n1->data = 29;
    n1->next = nullptr;

    Node* n2 = new Node();
    n2->data = 234;
    n2->next = nullptr;

    Node* n3 = new Node();
    n3->data = 232;
    n3->next = nullptr;

    // Step 2: Link the nodes
    n1->next = n2;
    n2->next = n3;

    // Step 3: Set the head pointer to the first node (n1)
    Node* head = n1;

    // Step 4: Create the new node to insert at the beginning
    Node* NewNode = new Node();
    NewNode->data = 1000;
    NewNode->next = nullptr;

    // Step 5: Insert the new node at the beginning
    NewNode->next = head; // NewNode now points to the original first node (n1)
    head = NewNode; // head is changed now..understood?you big oaf👊

    // Step 6: Traverse and print the list starting from head
    Node* current = head; // Start from the new head
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;  // Move to the next node
    }

    return 0;
}
