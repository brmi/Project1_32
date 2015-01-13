//
//  Pit.h
//  Project1_32
//
//  Created by desiree on 1/7/15.
//  Copyright (c) 2015 desiree. All rights reserved.
//

#ifndef Project1_32_Pit_h
#define Project1_32_Pit_h


#include "globals.h"
#include "History.h"
#include <string>

class Player;
class Snake;
class History;

class Pit
{
public:
    // Constructor/destructor
    Pit(int nRows, int nCols);
    ~Pit();
    
    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     snakeCount() const;
    int     numberOfSnakesAt(int r, int c) const;
    void    display(std::string msg) const;
    History& history();
    
    // Mutators
    bool   addSnake(int r, int c);
    bool   addPlayer(int r, int c);
    bool   destroyOneSnake(int r, int c);
    bool   moveSnakes();
    
private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Snake*  m_snakes[MAXSNAKES];
    int     m_nSnakes;
    History m_history; //need & ???
};


#endif
