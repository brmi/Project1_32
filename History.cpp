//
//  History.cpp
//  Project1_32
//
//  Created by desiree on 1/8/15.
//  Copyright (c) 2015 desiree. All rights reserved.
//

#include "History.h"
//#include "Pit.h"
#include "globals.h"
#include <iostream>
//didn't include
#include <cstdlib> //for exit

History::History(int nRows, int nCols): m_row(nRows), m_col(nCols) 
{
    // Fill the grid with dots
    for (int r = 0; r<nRows; r++)
        for (int c = 0; c < nCols; c++)
            grid[r][c] = '.';
}


bool History::record(int r, int c)
{
    //given grid point where snake dies
 
    
    if(r > m_row || r<=0 || c>m_col || c<=0)
        return false;
    
    //using ascii stuff
    
  if (grid[r-1][c-1]== '.')
      grid[r-1][c-1]='A';
    else if(grid[r-1][c-1] < 'Z' )
    {
        grid[r-1][c-1]++;
    }
    return true;
}



void History::display() const
{
    
    for (int h = 0; h<m_row; h++)
    {
        for (int j = 0; j < m_col; j++)
        {
            std::cout<<grid[h][j];
            
        }
        std::cout<<std::endl;
    }
}