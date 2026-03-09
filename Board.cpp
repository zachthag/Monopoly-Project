
#include <iostream>
#include <string>
#include "Board.h"


Board::Board() {

    head = nullptr;
    tail = nullptr;
    size = 0;

    player = nullptr;
    goPasses = 0;
}

bool Board::addSpace(const Space& s) {

    if (size == 40)
        return false;
    if (size == 0) {

        head = new Node();

        head->next = head;
        head->data = s;

        tail = head;

        player = head;

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


int Board::addMany(const std::vector<Space> &spaces) {
    int added = 0;

    for (int i = 0; i < spaces.size(); i++) {
        if (addSpace(spaces.at(i))) {
            added++;
        }
        else {
            break;
        }
    }
    return added;
}

void Board::move(int steps) {
    if (player == nullptr) {
        return;
    }
    for (int i = 0; i < steps; i++) {
        player = player->next;

        if (player == head) {
            goPasses++;
        }
    }
}

void Board::printFromCurrent(int count) const {
    if (player == nullptr) {
        return;
    }

    Node* temp = player;

    for (int i = 0; i < count; i++) {

        std::cout << temp->data.name << "\n";
        temp = temp->next;
    }
}

std::string Board::currentName() const {
    if (player == nullptr) {
        return "EMPTY";
    }
    return player->data.name;
}
