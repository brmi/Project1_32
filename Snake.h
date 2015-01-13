//
//  Snake.h
//  Project1_32
//
//  Created by desiree on 1/7/15.
//  Copyright (c) 2015 desiree. All rights reserved.
//

#ifndef __Project1_32__Snake__
#define __Project1_32__Snake__



class Pit;

class Snake
{
public:
    // Constructor
    Snake(Pit* pp, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    
private:
    Pit* m_pit;
    int  m_row;
    int  m_col;
};

#endif /* defined(__Project1_32__Snake__) */
