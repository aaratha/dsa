#include "linked_list.h"
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

    return 0;
}
