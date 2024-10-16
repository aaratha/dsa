#pragma once

#include <iostream>

struct QNode {
    int data;
    QNode* next;
};

class Queue {
public:
    QNode* front;
    QNode* rear;
    Queue();

    void enqueue(int x);
    void dequeue();
    bool isEmpty();
    void print();
};
