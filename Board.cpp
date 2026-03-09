
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
    if (size == 0) {

        head = new Node();

        head->next = head;
        head->data = s;

        tail = head;

        size++;
        return true;

    }
    else {

        Node* newNode = new Node();

        newNode->data = s;

        tail->next = newNode;
        tail = newNode;
        tail->next = head;

        size++;
        return true;

    }
}
