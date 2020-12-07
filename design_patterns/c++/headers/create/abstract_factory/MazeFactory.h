/******************* Abstract Factory ***********************/
#ifndef __HEADER_MAZE_FACTORY__
#define __HEADER_MAZE_FACTORY__

#include "../../Maze.h"
#include "../../Room.h"
#include "../../Door.h"
#include "../../Wall.h"

class MazeFactory {

public:
    Maze* makeMaze() const;
    Wall* makeWall() const;
    Room* makeRoom(int number) const;
    Door* makeDoor(Room*, Room*) const;
};

#endif
