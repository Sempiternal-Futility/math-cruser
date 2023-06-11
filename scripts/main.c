#include <stdlib.h>
#include <locale.h>
#include "../headers/draw.h" // This header already includes ncurses.h
#include "../headers/input.h"

//TODO: DRAW THE OPERATION BOX

int main()
{
   setlocale(LC_CTYPE, "");
   initscr();
   noecho();
   curs_set(0);

	draw_everything();
	while(1 > 0)
	{
	   char input = getch();

   	blink_nums(input);
		check_quit(input);
	}

   endwin();
   return 0;
}
