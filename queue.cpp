#include "queue.h"
#include <memory>

Queue::Queue() {
    front = NULL;
    rear = NULL;
}

void Queue::enqueue(int x) {
    QNode* temp = new QNode();

    temp->data = x;
    temp->next = NULL;
    if (front == NULL && rear == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void Queue::dequeue() {
    QNode* temp = front;
    if (front==NULL) return;
    if (front==rear) {
        front = rear = NULL;
    } else {
        front = front->next;
    }
    free(temp);
}

void Queue::print() {
    QNode* temp = front;

    while(temp != NULL) {
        printf(" %d", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
