#include <stdlib.h>
#include <locale.h>
#include "../headers/draw.h" // This header already includes ncurses.h
#include "../headers/input.h"
#include "../headers/math.h"

//TODO: 
//IMPLEMENT ERASE FEATURE
//DRAW A "." ASCII SYMBOL, FOR FLOATING INPUTS

int main()
{
   setlocale(LC_CTYPE, "");
   initscr();
   curs_set(0);
	noecho();

	// The only purpose of these vars are to be something for the pointers to point to
	short num = 13;
	short numtwo = -16;

 	// These pointers are used to check the position in which input should be printed in the equation table
	short *posy = &num;
	short *posx = &numtwo;

	char num_one_array[24]; // This holds the user's input in the 1st line of the equation table
	char operator; // This is the operator, gets inputted at the 2nd line of the equation table
	char num_two_array[24]; // This holds the user's input in the 3rd line of the equation table

	draw_everything();

	while(1 > 0)
	{
		for(short i = 0; i < 24; i++) // In this loop, the 1st array gets assigned
		{
	   	char input = getch();

   		blink_nums(input);
			input_at_table(input, posy, posx);
			check_quit(input);

			num_one_array[i] = input;

			if(input == '\n')
	   		i = 25; // Breaks the loop
		}

		for(short i = 0; i < 2; i++) // In this loop, the operator gets assigned
		{
			char input = getch();

   		blink_nums(input);
   		input_at_table(input, posy, posx);
   		check_quit(input);

			if(input != '\n')
				operator = input;
		
			else
	   		i = 3;
		}

		for(short i = 0; i < 24; i++) // In this loop, the 2nd array gets assigned
   	{
   		char input = getch();

   		blink_nums(input);
			input_at_table(input, posy, posx);
			check_quit(input);

			num_two_array[i] = input;

	   	if(input == '\n')
				i = 25; // Breaks the loop		
		}

		double num_one;
		double num_two;

		num_one = atof(num_one_array);
		num_two = atof(num_two_array);

		if(operator == '+')
			sum(num_one, num_two);

		else if(operator == '-')
			minus(num_one, num_two);

		else if(operator == '*')
			mult(num_one, num_two);

		else if(operator == '/')
			divis(num_one, num_two);

		getch();
		erase_table_contents();

		*posy = 13;
		*posx = -16;
	}

   endwin();
   return 0;
}
