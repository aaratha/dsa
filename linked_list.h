#pragma once

#include <initializer_list>
struct Node {
    int data;
    Node* next;
};

struct DoubleNode {
    int data;
    DoubleNode* next;
    DoubleNode* prev;
};

class List {

    Node* head;

    public:
        List();
        List(std::initializer_list<int> list);

        void insert(int x, int i);
        void append(int n);
        void print();
        void remove(int i);
        void reverse();
};

