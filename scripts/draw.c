// THIS SCRIPT DRAWS STUFF TO THE SCREEN
#include </home/felix/Documents/C-Projects/math-crusher/headers/draw.h>

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

void draw_numbers()
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
}
