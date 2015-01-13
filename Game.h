//
//  Game.h
//  Project1_32
//
//  Created by desiree on 1/7/15.
//  Copyright (c) 2015 desiree. All rights reserved.
//

#ifndef Project1_32_Game_h
#define Project1_32_Game_h

class Pit;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nSnakes);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Pit* m_pit;
};

#endif
