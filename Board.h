#ifndef MONOPOLY_PROJECT_ASSIGNMENT_BOARD_H
#define MONOPOLY_PROJECT_ASSIGNMENT_BOARD_H

#include <vector>
#include "Space.h"

struct Node {

    Space data;
    Node* next;
};

class Board {

public:
    Board();

    bool addSpace(const Space& s);

    int addMany (const std::vector<Space>& spaces);


private:
    Node* head;
    Node* tail;
    Node* player;

    int size;
    int goPasses;

};

#endif //MONOPOLY_PROJECT_ASSIGNMENT_BOARD_H