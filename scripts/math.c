#include <ncurses.h>
#include "../headers/math.h"
#include "../headers/draw.h"

void print_result(double result)
{
	if(result > 0  &&  result < 10) // 1 Digits number
		move(MID_YPOS -12, MID_XPOS -6);
	
	else if(result > 9  &&  result < 1000) // 2-3 Digits number
   	move(MID_YPOS -12, MID_XPOS -7);

	else if(result > 999  &&  result < 100000) // 4-5 Digits number
		move(MID_YPOS - 12, MID_XPOS -8);

	else if(result > 9999  &&  result < 1000000) // 5-6 Digits number
		move(MID_YPOS - 12, MID_XPOS -9);

	else if(result > 99999  &&  result < 10000000) // ?-7 Digits number
		move(MID_YPOS - 12, MID_XPOS -9);

	else if(result < 0  &&  result > -10) // 1 Digits number (negative)
		move(MID_YPOS -12, MID_XPOS -6);
	
	else if(result < -9  &&  result > -1000) // 2-3 Digits number (negative)
   	move(MID_YPOS -12, MID_XPOS -7);

	else if(result < -999  &&  result > -100000) // 4-5 Digits number (negative)
		move(MID_YPOS - 12, MID_XPOS -8);

	else if(result < -9999  &&  result > -1000000) // 5-6 Digits number (negative)
		move(MID_YPOS - 12, MID_XPOS -9);

	else if(result < -99999  &&  result > -10000000) // ?-7 Digits number (negative)
		move(MID_YPOS - 12, MID_XPOS -9);

	else if(result == 0) // If the result is 0
		move(MID_YPOS - 12, MID_XPOS -6);

   else
   	move(MID_YPOS - 12, MID_XPOS -16);

	printw("%.2lf", result);
}

void sum(double num_one, double num_two)
{
	double result = num_one + num_two;
	erase_table();
	print_result(result);
}
