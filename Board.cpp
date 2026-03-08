
#include <iostream>
#include <string>

#include "Board.h"


Board::Board() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

bool Board::addSpace(const Space& s) {

    if (size == 40)
        return false;

    head = new Node();
    head->next = head;
    head->data = s;
}
