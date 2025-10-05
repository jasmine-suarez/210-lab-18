// COMSC-210 | Lab 18 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

struct Node {
    double rating;
    string comment;
    Node *next;
};

// function prototypes
void addFront(Node *&, double, string);
void addTail(Node *&, double, string);

int main() {
    Node *head = nullptr;
    int choice;

    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
    cout << "\tChoice: ";
    cin >> choice;
    cin.ignore();

    return 0;
}

void addFront(Node *&head, double rating, string comment) {
    Node *newNode = new Node;
    newNode->rating = rating;
    newNode->comment = comment;
    newNode->next = head;
    head = newNode;
}

void addTail(Node *&head, double rating, string comment) {
    Node *newNode = new Node;
    newNode->rating = rating;
    newNode->comment = comment;
    newNode->next = nullptr;
}