// THIS SCRIPT DRAWS STUFF TO THE SCREEN
#include "../headers/draw.h"

void draw_one()
{
   move(MID_YPOS +4, MID_XPOS -14);
   printw("  ██  ");

   move(MID_YPOS +5, MID_XPOS -14);
   printw(" ███  ");

   move(MID_YPOS +6, MID_XPOS -14);
   printw("  ██  ");

   move(MID_YPOS +7, MID_XPOS -14);
   printw("  ██  ");

   move(MID_YPOS +8, MID_XPOS -14);
   printw("██████");
}

void erase_one()
{
   move(MID_YPOS +4, MID_XPOS -14);
   printw("      ");

   move(MID_YPOS +5, MID_XPOS -14);
   printw("      ");

   move(MID_YPOS +6, MID_XPOS -14);
   printw("      ");

   move(MID_YPOS +7, MID_XPOS -14);
   printw("      ");

   move(MID_YPOS +8, MID_XPOS -14);
   printw("      ");
}

void draw_two()
{
	move(MID_YPOS +4, MID_XPOS -7);
	printw(" ████ ");

	move(MID_YPOS +5, MID_XPOS -7);
	printw("█   ██");

	move(MID_YPOS +6, MID_XPOS -7);
	printw("   ██ ");

	move(MID_YPOS +7, MID_XPOS -7);
	printw(" ██    ");

	move(MID_YPOS +8, MID_XPOS -7);
	printw("██████");
}

void erase_two()
{
	move(MID_YPOS +4, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +5, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +6, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +7, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +8, MID_XPOS -7);
	printw("      ");
}

void draw_three()
{
	move(MID_YPOS +4, MID_XPOS);
	printw("██████");

	move(MID_YPOS +5, MID_XPOS);
	printw("    ██");

	move(MID_YPOS +6, MID_XPOS);
	printw("██████");

	move(MID_YPOS +7, MID_XPOS);
	printw("    ██");

	move(MID_YPOS +8, MID_XPOS);
	printw("██████");
}

void erase_three()
{
	move(MID_YPOS +4, MID_XPOS);
	printw("      ");

	move(MID_YPOS +5, MID_XPOS);
	printw("      ");

	move(MID_YPOS +6, MID_XPOS);
	printw("      ");

	move(MID_YPOS +7, MID_XPOS);
	printw("      ");

	move(MID_YPOS +8, MID_XPOS);
	printw("      ");
}

void draw_four()
{
	move(MID_YPOS -2, MID_XPOS -14);
	printw("██  ██");

	move(MID_YPOS -1, MID_XPOS -14);
	printw("██  ██");

	move(MID_YPOS, MID_XPOS -14);
	printw("██████");

	move(MID_YPOS +1, MID_XPOS -14);
	printw("    ██");

	move(MID_YPOS +2, MID_XPOS -14);
	printw("    ██");
}

void erase_four()
{
	move(MID_YPOS -2, MID_XPOS -14);
	printw("      ");

	move(MID_YPOS -1, MID_XPOS -14);
	printw("      ");

	move(MID_YPOS, MID_XPOS -14);
	printw("      ");

	move(MID_YPOS +1, MID_XPOS -14);
	printw("      ");

	move(MID_YPOS +2, MID_XPOS -14);
	printw("      ");
}

void draw_five()
{
	move(MID_YPOS -2, MID_XPOS -7);
	printw("██████");

	move(MID_YPOS -1, MID_XPOS -7);
	printw("██    ");

	move(MID_YPOS, MID_XPOS -7);
	printw("██████");

	move(MID_YPOS +1, MID_XPOS -7);
	printw("    ██");

	move(MID_YPOS +2, MID_XPOS -7);
	printw("██████");
}

void erase_five()
{
	move(MID_YPOS -2, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS -1, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +1, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +2, MID_XPOS -7);
	printw("      ");
}

void draw_six()
{
	move(MID_YPOS -2, MID_XPOS);
	printw("██████");

	move(MID_YPOS -1, MID_XPOS);
	printw("██    ");

	move(MID_YPOS, MID_XPOS);
	printw("██████");

	move(MID_YPOS +1, MID_XPOS);
	printw("██  ██");

	move(MID_YPOS +2, MID_XPOS);
	printw("██████");
}

void erase_six()
{
	move(MID_YPOS -2, MID_XPOS);
	printw("      ");

	move(MID_YPOS -1, MID_XPOS);
	printw("      ");

	move(MID_YPOS, MID_XPOS);
	printw("      ");

	move(MID_YPOS +1, MID_XPOS);
	printw("      ");

	move(MID_YPOS +2, MID_XPOS);
	printw("      ");
}

void draw_seven()
{
	move(MID_YPOS -8, MID_XPOS -14);
	printw("██████");

	move(MID_YPOS -7, MID_XPOS -14);
	printw("    ██");

	move(MID_YPOS -6, MID_XPOS -14);
	printw("    ██");

	move(MID_YPOS -5, MID_XPOS -14);
	printw("    ██");

	move(MID_YPOS -4, MID_XPOS -14);
	printw("    ██");
}

void erase_seven()
{
	move(MID_YPOS -8, MID_XPOS -14);
	printw("      ");

	move(MID_YPOS -7, MID_XPOS -14);
	printw("      ");

	move(MID_YPOS -6, MID_XPOS -14);
	printw("      ");

	move(MID_YPOS -5, MID_XPOS -14);
	printw("      ");

	move(MID_YPOS -4, MID_XPOS -14);
	printw("      ");
}

void draw_eight()
{
	move(MID_YPOS -8, MID_XPOS -7);
	printw("██████");

	move(MID_YPOS -7, MID_XPOS -7);
	printw("██  ██");

	move(MID_YPOS -6, MID_XPOS -7);
	printw("██████");

	move(MID_YPOS -5, MID_XPOS -7);
	printw("██  ██");

	move(MID_YPOS -4, MID_XPOS -7);
	printw("██████");
}

void erase_eight()
{
	move(MID_YPOS -8, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS -7, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS -6, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS -5, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS -4, MID_XPOS -7);
	printw("      ");
}

void draw_nine()
{
	move(MID_YPOS -8, MID_XPOS);
	printw("██████");

	move(MID_YPOS -7, MID_XPOS);
	printw("██  ██");

	move(MID_YPOS -6, MID_XPOS);
	printw("██████");

	move(MID_YPOS -5, MID_XPOS);
	printw("    ██");

	move(MID_YPOS -4, MID_XPOS);
	printw("██████");
}

void erase_nine()
{
	move(MID_YPOS -8, MID_XPOS);
	printw("      ");

	move(MID_YPOS -7, MID_XPOS);
	printw("      ");

	move(MID_YPOS -6, MID_XPOS);
	printw("      ");

	move(MID_YPOS -5, MID_XPOS);
	printw("      ");

	move(MID_YPOS -4, MID_XPOS);
	printw("      ");
}

void draw_zero()
{
	move(MID_YPOS +10, MID_XPOS -7);
	printw("██████");

	move(MID_YPOS +11, MID_XPOS -7);
	printw("██  ██");

	move(MID_YPOS +12, MID_XPOS -7);
	printw("██  ██");

	move(MID_YPOS +13, MID_XPOS -7);
	printw("██  ██");

	move(MID_YPOS +14, MID_XPOS -7);
	printw("██████");
}

void erase_zero()
{
	move(MID_YPOS +10, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +11, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +12, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +13, MID_XPOS -7);
	printw("      ");

	move(MID_YPOS +14, MID_XPOS -7);
	printw("      ");
}

void draw_plus()
{
	move(MID_YPOS -8, MID_XPOS +12);
	printw("  ██  ");

	move(MID_YPOS -7, MID_XPOS +12);
	printw("██████");

	move(MID_YPOS -6, MID_XPOS +12);
	printw("  ██  ");
}

void erase_plus()
{
	move(MID_YPOS -8, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS -7, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS -6, MID_XPOS +12);
	printw("      ");
}

void draw_minus()
{
	move(MID_YPOS -4, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS -3, MID_XPOS +12);
	printw("██████");

	move(MID_YPOS -2, MID_XPOS +12);
	printw("      ");
}

void erase_minus()
{
	move(MID_YPOS -4, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS -3, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS -2, MID_XPOS +12);
	printw("      ");
}

void draw_mult()
{
	move(MID_YPOS, MID_XPOS +12);
	printw("██  ██");

	move(MID_YPOS +1, MID_XPOS +12);
	printw("  ██  ");

	move(MID_YPOS +2, MID_XPOS +12);
	printw("██  ██");
}

void erase_mult()
{
	move(MID_YPOS, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS +1, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS +2, MID_XPOS +12);
	printw("      ");
}

void draw_divis()
{
	move(MID_YPOS +5, MID_XPOS +12);
	printw("    ██");

	move(MID_YPOS +6, MID_XPOS +12);
	printw("  ██  ");

	move(MID_YPOS +7, MID_XPOS +12);
	printw("██    ");
}

void erase_divis()
{
	move(MID_YPOS +5, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS +6, MID_XPOS +12);
	printw("      ");

	move(MID_YPOS +7, MID_XPOS +12);
	printw("      ");
}

void draw_table()
{
	move(MID_YPOS -14, MID_XPOS -18);
	printw("████████████████████████████"); // Draws the top horizontal

	//Draws the left vertical
	move(MID_YPOS -13, MID_XPOS -18);
	printw("██");	
	move(MID_YPOS -12, MID_XPOS -18);
	printw("██");
	move(MID_YPOS -11, MID_XPOS -18);
	printw("██");

	//Draws the right vertical
	move(MID_YPOS -13, MID_XPOS +8);
	printw("██");
	move(MID_YPOS -12, MID_XPOS +8);
	printw("██");
	move(MID_YPOS -11, MID_XPOS +8);
	printw("██");
	
	move(MID_YPOS -10, MID_XPOS -18);
	printw("████████████████████████████"); // Draws the bottom horizontal
}

void draw_everything()
{
	draw_one();
	draw_two();
	draw_three();
	draw_four();
	draw_five();
	draw_six();
	draw_seven();
	draw_eight();
	draw_nine();
	draw_zero();
	
	draw_plus();
	draw_minus();
	draw_mult();
	draw_divis();

	draw_table();
}
