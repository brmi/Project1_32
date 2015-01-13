//
//  Player.h
//  Project1_32
//
//  Created by desiree on 1/7/15.
//  Copyright (c) 2015 desiree. All rights reserved.
//

#ifndef Project1_32_Player_h
#define Project1_32_Player_h

class Pit;

class Player
{
public:
    // Constructor
    Player(Pit *pp, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;
    
    // Mutators
    void   stand();
    void   move(int dir);
    void   setDead();
    
private:
    Pit*  m_pit;
    int   m_row;
    int   m_col;
    int   m_age;
    bool  m_dead;
};


#endif
