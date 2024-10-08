#include "linked_list.h"

#include <iostream>

List::List() { head = NULL; }

List::List(std::initializer_list<int> list) {
    head = NULL;
    for (int value : list) {
        append(value);
    }
}

void List::insert(int x, int i) {
    Node* temp1 = new Node();

    temp1 -> data = x;
    temp1 -> next = NULL;

    if (i == 0) {
        temp1 -> next = head;
        head = temp1;
        return;
    }

    Node* temp2 = head;
    for (int j=0; j<i-1; j++) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void List::append(int n) {
    Node* temp1 = new Node();

    temp1->data = n;
    temp1->next = NULL;

    if (head == NULL) {
        head = temp1;
    } else {
        Node* temp2 = head;
        while (temp2->next != NULL) {
            temp2 = temp2->next;
        }
        temp2->next = temp1;
    }
}

void List::print() {
    Node* temp = head;

    while(temp != NULL) {
        printf(" %d", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

void List::remove(int i) {
    Node* temp1 = head;
    if (i==0) {
        head = temp1->next;
        delete temp1;
        return;
    }
    int j;
    for (j=0; j<i-1; j++)
        temp1 = temp1->next;
    // temp1 points to (i-1)th node
    Node* temp2 = temp1->next; // ith node
    temp1->next = temp2->next; //point i-1 to i+1
    delete temp2; // delete i
}

void List::reverse() {
    Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL) { // while next node isnt null
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
