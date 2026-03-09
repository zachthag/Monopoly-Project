##README##
Zachary Gass
CS 210-03


Build and Run:

Compile then run the file. It should execute automatically with the output of the rolls, spaces they landed on, 
and how many times they passed go.



Data Structures Used:

Circular Linked List- I used a circular linked list by making whatever the last tail node is point back to the head node.

Struct- I used a Node struct to create the nodes for the circular linked list, as well as for the spaces to implement their 
data(being the names and colors of the spaces).

Board- The Board class the head, tail, and player pointers, as well as 'size' and 'goPasses' as ints. It also has 'move' and 
'printFromCurrent' as two voids, and 'currentName()'.



Functions:


bool addSpace()- Adds a space and returns false if the capacity is reached. Returns true if successful

int addMany()- Adds multiple spaces and returns the amount that were successfully added.

int getGoPasses()- Returns the amount a player has passed go.

void move()- Moves a player a given amount of nodes forward, as well as looping to the head of the list when the tail is passed, counting for a passed go.

void printFromCurrent()- Prints out a set number of spaces starting from the position.

string currentName()- Returns the current name of the space.



Traversal & Movement Logic:

Players traverse the board by using pointer nodes to point to the next space. It goes step by step with player->next, and go is passed 
when player == head(after looping from the tail). It loops because its circular and the tail points to the head.



40 Space Max. Capacity Enforcement:

The 40 space max is enforced by addMany() and addSpace(). addSpace() returns false when the max capacity of 40 is reached(strictly enforcing the max), 
and addMany() stops adding spaces when the max is reached, returning the number of spaces it was able to successfully implement.
