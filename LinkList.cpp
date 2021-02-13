#include "LinkList.h"

void LinkList::addFront(string data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = nullptr;

    if (head == nullptr)
        tail = newNode;
    else
        newNode->link = head;

    head = newNode;
}

void LinkList::addBack(string data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = nullptr;

    if (head == nullptr)
        head = newNode;
    else
        tail->link = newNode;

    tail = newNode;
}

void LinkList::remove(string data) {
    Node *current = head;
    Node *trail = nullptr;
    bool found = false;

    while (current != nullptr && !found)
        if (current->data == data) {
            found = true;
            break;
        }
        else {
            trail = current;
            current = current->link;
        }
    
    if (found) {
        if (current == head) {
            head = head->link;

            if (head == nullptr)
                tail = nullptr;

            delete current;
        }
        else {
            trail->link = current->link;

            if(current == tail)
                tail = trail;
                
            delete current;
        }
    }
}

void LinkList::display() const {
    Node *current = head;

    while (current != nullptr) {
        cout << current->data << endl;
        current = current->link;
    }
    cout << endl;
}

//Constructor

LinkList::LinkList() {
    head = nullptr;
    tail = nullptr;
}

LinkList::~LinkList() {

}