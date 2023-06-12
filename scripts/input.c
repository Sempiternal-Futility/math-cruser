// THIS FILE HANDLES USER INPUT
#include "../headers/input.h"
#include "../headers/draw.h" // This header already includes <ncurses.h>
#include <stdlib.h>

void blink_nums(char input)
{
	if(input == '1')
	{
		erase_one();
		refresh();
		system("sleep 0.08s");
		draw_one();
	}

	else if(input == '2')
   {
		erase_two();
		refresh();
		system("sleep 0.08s");
		draw_two();
	}

	else if(input == '3')
	{
		erase_three();
		refresh();
		system("sleep 0.08s");
		draw_three();
	}

	else if(input == '4')
	{
		erase_four();
		refresh();
		system("sleep 0.08s");
		draw_four();
	}

	else if(input == '5')
	{
		erase_five();
		refresh();
		system("sleep 0.08s");
		draw_five();
	}

	else if(input == '6')		
	{	
		erase_six();
		refresh();
		system("sleep 0.08s");
		draw_six();
	}
	
	else if(input == '7')
	{
	   erase_seven();
		refresh();
		system("sleep 0.08s");
		draw_seven();
	}

	else if(input == '8')
	{
		erase_eight();
		refresh();
		system("sleep 0.08s");
		draw_eight();
	}

	else if(input == '9')
	{
	   erase_nine();
		refresh();
		system("sleep 0.08s");
		draw_nine();
	}

	else if(input == '0')
	{
	   erase_zero();
		refresh();
		system("sleep 0.08s");
		draw_zero();
	}

	else if(input == '+')
	{
		erase_plus();
		refresh();
		system("sleep 0.08s");
		draw_plus();
	}

	else if(input == '-')
	{
		erase_minus();
		refresh();
		system("sleep 0.08s");
		draw_minus();
	}
	
	else if(input == '*')
	{
		erase_mult();
		refresh();
		system("sleep 0.08s");
		draw_mult();
	}

	else if(input == '/')
	{
		erase_divis();
		refresh();
		system("sleep 0.08s");
		draw_divis();
	}
}

void input_at_table(char input, short *posy, short *posx)
{
   if(input != 'q'  &&  input != '\n'  &&  input != 'x')
	{
		move(MID_YPOS -*posy, MID_XPOS +*posx);
		printw("%c", input);	
		
		if(*posx < 7 ) // 7 is the boundary of the equation table
   		*posx += 1;
	}

	if(input == '\n')
	{
		*posy -= 1; // Goes down to the next line
		*posx = -16; // Resets the x position
	}
}

void erase_input(short *posy, short *posx)
{	
	if(*posx > -16)
	{
		move(MID_YPOS -*posy, MID_XPOS +*posx -1);
		printw(" ");
	   *posx -= 1;
	}
}

void check_quit(char input)
{
	if(input == 'q')
	{
		endwin();
		clear();
		exit(0);
	}
}
