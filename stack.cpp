#include "stack.h"
#include "linked_list.h"

#include <iostream>
#include <type_traits>

Stack::Stack() { head = NULL;}

void Stack::push(int x) {
  insert(x, 0);
}

int Stack::top() {
  return head->data;
}

int Stack::pop() {
  int n = top();
  remove(0);
  return n;
}

bool Stack::is_empty() {
  return head==NULL;
}
