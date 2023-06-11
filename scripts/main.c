#include <stdlib.h>
#include </home/felix/Documents/C-Projects/math-crusher/headers/draw.h> // This header already includes ncurses.h
#include <locale.h>

//TODO: DRAW THE OPERATION BOX

int main()
{
   setlocale(LC_CTYPE, "");
   initscr();
   noecho();
   curs_set(0);

	draw_everything();
	getch();

   endwin();
   return 0;
}
