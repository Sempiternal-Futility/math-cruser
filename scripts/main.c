#include <stdlib.h>
#include </home/felix/Documents/C-Projects/math-crusher/headers/draw.h> // This header already includes ncurses.h
#include <locale.h>

//TODO: DRAW THE NUMBERS AT DIFFERENT POSITIONS DEPENDING ON THE VALUES OF "LINES" AND "COLS" a.k.a PTS SIZE

int main()
{
   setlocale(LC_CTYPE, "");
   initscr();
   noecho();
   curs_set(0);

   draw_one();
	draw_two();
	draw_three();
	draw_four();
	draw_five();
	draw_six();
	getch();

   endwin();
   return 0;
}
