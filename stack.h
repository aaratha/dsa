#pragma once

#include <iostream>
#include "linked_list.h"

class Stack : public List {
    public:
        Stack();
        void push(int x);
        int pop();
        int top();
        bool is_empty();
};
