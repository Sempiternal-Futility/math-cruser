#include <stdlib.h>
#include <locale.h>
#include "../headers/draw.h" // This header already includes ncurses.h
#include "../headers/input.h"

//TODO: PUT INPUTTED NUMBERS IN THE TABLE

int main()
{
   setlocale(LC_CTYPE, "");
   initscr();
   curs_set(0);
	noecho();

	short num = 13; // The only purpose of this var is to be something for the pointer to point to
	short numtwo = 7;

 	// These pointers are used to check the position in which input should be printed in the equation table
	short *posy = &num;
	short *posx = &numtwo;

	draw_everything();
	while(1 > 0)
	{
	   char input = getch();

   	blink_nums(input);
		input_at_table(input, posy, posx);

		check_quit(input);
	}

   endwin();
   return 0;
}
