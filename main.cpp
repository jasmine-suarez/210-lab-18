// COMSC-210 | Lab 18 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

struct Node {
    double rating;
    string comment;
    Node *next;
};

int main() {
   
    int choice;

    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
    cout << "\tChoice: ";
    cin >> choice;
    cin.ignore();

    return 0;
}