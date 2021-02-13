#ifndef LINKLIST_H
#define LINKLIST_H

#include <iostream>
#include <string>

using namespace std;

struct Node {
    string data;
    Node *link;
};

class LinkList {
public:
    void addFront(string);
    void addBack(string);
    void remove(string);
    void display() const;
    
    LinkList();
    ~LinkList();

private:
    Node *head;
    Node *tail;
};

#endif

