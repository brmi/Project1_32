//
//  globals.h
//  Project1_32
//
//  Created by desiree on 1/7/15.
//  Copyright (c) 2015 desiree. All rights reserved.
//

#ifndef Project1_32_globals_h
#define Project1_32_globals_h

int decodeDirection(char dir);
bool directionToDeltas(int dir, int& rowDelta, int& colDelta);
void clearScreen();

const int MAXROWS = 20;             // max number of rows in the pit
const int MAXCOLS = 40;             // max number of columns in the pit
const int MAXSNAKES = 180;          // max number of snakes allowed

const int UP    = 0;
const int DOWN  = 1;
const int LEFT  = 2;
const int RIGHT = 3;


#endif
