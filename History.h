//
//  History.h
//  Project1_32
//
//  Created by desiree on 1/8/15.
//  Copyright (c) 2015 desiree. All rights reserved.
//

#ifndef __Project1_32__History__
#define __Project1_32__History__

#include "globals.h"


class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
private:
    int m_row;
    int m_col;
    char grid[MAXROWS][MAXCOLS];
    
    
};

#endif /* defined(__Project1_32__History__) */
