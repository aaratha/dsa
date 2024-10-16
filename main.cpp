#include "linked_list.h"
#include "stack.h"
#include "queue.h"
#include <iostream>

auto main(int argc, char *argv[]) -> int {

    List A = List();

    A.insert(5, 0);
    A.insert(2, 0);
    A.insert(3, 1);
    A.insert(4, 2);
    A.print();

    A.remove(2);
    A.print();

    A.remove(0);
    A.print();

    A.insert(5, 0);
    A.insert(2, 0);
    A.insert(3, 1);
    A.insert(4, 2);
    A.print();
    A.reverse();
    A.print();
    A.append(9);
    A.append(7);
    A.print();

    List B = List{1,2,3,4};
    B.print();

    Stack G = Stack();
    G.push(2);
    G.push(5);
    G.print();
    printf(" %d\n", G.pop());
    G.print();
    printf(" %d\n", G.is_empty());
    G.pop();
    printf(" %d\n", G.is_empty());

    Queue Q = Queue();
    Q.enqueue(2);
    Q.enqueue(4);
    Q.print();
    Q.enqueue(8);
    Q.print();
    Q.dequeue();
    Q.print();
    return 0;
}
