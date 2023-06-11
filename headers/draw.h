// THIS HEADER CONTAINS ALL THE FUNCTIONS WITHIN "draw.c"

#ifndef DRAW_H
#define DRAW_H

#include <ncurses.h>
#define MID_YPOS LINES /2 // CENTER Y POSITION OF SCREEN
#define MID_XPOS COLS /2 // CENTER X POSITION OF SCREEN

void draw_one(); // Draws the number 1
void draw_two(); // Draws the number 2
void draw_three(); // Draws the number 3
void draw_four(); // Draws the number 4
void draw_five(); // Draws the number 5
void draw_six(); // Draws the number 6	
void draw_seven(); // Draws the number 7
void draw_eight(); // Draws the number 8						 
void draw_nine(); // Draws the number 9 
void draw_zero(); // Draws the number 0

void draw_plus(); // Draws the + symbol
void draw_minus(); // Draws the - symbol
void draw_mult(); // Draws the * symbol
void draw_divis(); // Draws the / symbol

void draw_table(); // Draws the table where the equation is displayed

void draw_everything(); // Draws everything all at once

#endif
