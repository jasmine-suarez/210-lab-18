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

    char inputMore = 'Y';
    while (inputMore == 'Y' || inputMore == 'y') {
        double rating;
        string comment;

        cout << "Enter review rating 0-5: ";
        cin >> rating;
        cin.ignore();

        cout << "Enter review comments: ";
        getline(cin, comment);

        if (choice == 1)
            addFront(head, rating, comment);
        else
            addTail(head, rating, comment);

        
    }


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

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node *current = head;
        while (current->next != nullptr)
            current = current->next;

        current->next = newNode;
    }
}