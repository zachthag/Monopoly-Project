#ifndef MONOPOLY_PROJECT_ASSIGNMENT_BOARD_H
#define MONOPOLY_PROJECT_ASSIGNMENT_BOARD_H

#include "Space.h"

struct Node {

    Space data;
    Node* next;
};

class Board {

public:
    Board();

private:
    Node* head;
    Node* tail;
    int size;
};

#endif //MONOPOLY_PROJECT_ASSIGNMENT_BOARD_H