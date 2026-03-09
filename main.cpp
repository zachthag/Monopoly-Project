#include <iostream>
#include "Board.h"
#include "Space.h"
#include <vector>
#include <cstdlib>
#include <ctime>


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    Board board;
    std::vector<Space> spaces;


    Space space1;
    space1.name = "Space1";
    space1.color = "Red";
    spaces.push_back(space1);

    Space space2;
    space2.name = "Space2";
    space2.color = "Green";
    spaces.push_back(space2);

    Space space3;
    space3.name = "Space3";
    space3.color = "Orange";
    spaces.push_back(space3);

    Space space4;
    space4.name = "Space4";
    space4.color = "Brown";
    spaces.push_back(space4);

    Space space5;
    space5.name = "Space5";
    space5.color = "Blue";
    spaces.push_back(space5);

    Space space6;
    space6.name = "Space6";
    space6.color = "Magenta";
    spaces.push_back(space6);

    Space space7;
    space7.name = "Space7";
    space7.color = "Pink";
    spaces.push_back(space7);

    Space space8;
    space8.name = "Space8";
    space8.color = "Yellow";
    spaces.push_back(space8);

    Space space9;
    space9.name = "Space9";
    space9.color = "Light Grey";
    spaces.push_back(space9);

    Space space10;
    space10.name = "Space10";
    space10.color = "Violet";
    spaces.push_back(space10);

    board.addMany(spaces);


    std::cout <<"Monopoly Project";
}