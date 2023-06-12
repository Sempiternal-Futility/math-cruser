// THIS HEADER CONTAINS ALL THE FUNCTIONS WITHIN "draw.c"

#ifndef DRAW_H
#define DRAW_H

#include <ncurses.h>
#define MID_YPOS LINES /2 // CENTER Y POSITION OF SCREEN
#define MID_XPOS COLS /2 // CENTER X POSITION OF SCREEN


void draw_one(); // Draws the number 1
void erase_one(); // Erases the number 1					  
						
void draw_two(); // Draws the number 2
void erase_two(); // Erases the number 2					  
					  
void draw_three(); // Draws the number 3
void erase_three(); // Erases the number 3
						  
void draw_four(); // Draws the number 4
void erase_four(); // Erases the number 4
						 
void draw_five(); // Draws the number 5
void erase_five(); // Erases the number 5

void draw_six(); // Draws the number 6	
void erase_six(); // Erases the number 6
						
void draw_seven(); // Draws the number 7
void erase_seven(); // Erases the number 7
						  
void draw_eight(); // Draws the number 8						 
void erase_eight(); // Erases the number 8
						  
void draw_nine(); // Draws the number 9 
void erase_nine(); // Erases the number 9
						 
void draw_zero(); // Draws the number 0
void erase_zero(); // Erases the number 0


void draw_plus(); // Draws the + symbol
void erase_plus(); // Erases the + symbol
						 
void draw_minus(); // Draws the - symbol
void erase_minus(); // Erases the - symbol
						  
void draw_mult(); // Draws the * symbol
void erase_mult(); // Erases the * symbol
						  
void draw_divis(); // Draws the / symbol
void erase_divis(); // Erases the / symbol


void draw_table(); // Draws the table where the equation is displayed
void erase_table_contents(); // Erases the stuff from the equation table
						  
void draw_everything(); // Draws everything all at once

#endif
