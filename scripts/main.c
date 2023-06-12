#include <stdlib.h>
#include <locale.h>
#include "../headers/draw.h" // This header already includes ncurses.h
#include "../headers/input.h"
#include "../headers/math.h"

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
			check_quit(input);

			num_one_array[i] = input;
			input_at_table(input, posy, posx);
   		blink_nums(input);

			if(input == 'x') // Erases input
			{
				if(i > 0)
					i -= 1;

				num_one_array[i] = ' ';
		   	erase_input(posy, posx);				

				if(i > 0)
					i -= 1;
			}

			if(input == '\n')
	   		i = 25; // Breaks the loop
		}

		for(short i = 0; i < 10; i++) // In this loop, the operator gets assigned
		{
			char input = getch();
   		check_quit(input);

   		input_at_table(input, posy, posx);
   		blink_nums(input);

			if(input != '\n')
				operator = input;

			if(input == 'x') // Erases input
			{
				operator = ' ';
		   	erase_input(posy, posx);				
				if(i > 0)
					i -= 1;
			}

			if(input == '\n')
	   		i = 11;
		}

		for(short i = 0; i < 24; i++) // In this loop, the 2nd array gets assigned
   	{
   		char input = getch();
			check_quit(input);

			num_two_array[i] = input;
   		blink_nums(input);
			input_at_table(input, posy, posx);

			if(input == 'x') // Erases input
			{				
				if(i > 0)
					i -= 1;

				num_two_array[i] = ' ';
		   	erase_input(posy, posx);				

				if(i > 0)
					i -= 1;
			}

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

		else // If operator is not valid
		{
			erase_table_contents();
         move(MID_YPOS -12, MID_XPOS -16);
			printw("OPERATOR IS NOT VALID!!!");
		}

		getch();
		erase_table_contents();

		//Resets the position values, so that the program can loop correctly
		*posy = 13;
		*posx = -16;
	}

   endwin();
   return 0;
}
