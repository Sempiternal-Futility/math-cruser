// THIS SCRIPT DRAWS STUFF TO THE SCREEN
#include </home/felix/Documents/C-Projects/math-crusher/headers/draw.h>

void draw_one()
{
   move(MID_YPOS +5, MID_XPOS -14);
   printw("  ██  ");

   move(MID_YPOS +6, MID_XPOS -14);
   printw(" ███  ");

   move(MID_YPOS +7, MID_XPOS -14);
   printw("  ██  ");

   move(MID_YPOS +8, MID_XPOS -14);
   printw("  ██  ");

   move(MID_YPOS +9, MID_XPOS -14);
   printw("██████");
}

void draw_two()
{
	move(MID_YPOS +5, MID_XPOS -7);
	printw(" ████ ");

	move(MID_YPOS +6, MID_XPOS -7);
	printw("█   ██");

	move(MID_YPOS +7, MID_XPOS -7);
	printw("   ██ ");

	move(MID_YPOS +8, MID_XPOS -7);
	printw(" ██    ");

	move(MID_YPOS +9, MID_XPOS -7);
	printw("██████");
}

void draw_three()
{
	move(MID_YPOS +5, MID_XPOS);
	printw("██████");

	move(MID_YPOS +6, MID_XPOS);
	printw("    ██");

	move(MID_YPOS +7, MID_XPOS);
	printw("██████");

	move(MID_YPOS +8, MID_XPOS);
	printw("    ██");

	move(MID_YPOS +9, MID_XPOS);
	printw("██████");
}

void draw_four()
{
	move(MID_YPOS -1, MID_XPOS -14);
	printw("██  ██");

	move(MID_YPOS, MID_XPOS -14);
	printw("██  ██");

	move(MID_YPOS +1, MID_XPOS -14);
	printw("██████");

	move(MID_YPOS +2, MID_XPOS -14);
	printw("    ██");

	move(MID_YPOS +3, MID_XPOS -14);
	printw("    ██");
}

void draw_five()
{
	move(MID_YPOS -1, MID_XPOS -7);
	printw("██████");

	move(MID_YPOS, MID_XPOS -7);
	printw("██    ");

	move(MID_YPOS +1, MID_XPOS -7);
	printw("██████");

	move(MID_YPOS +2, MID_XPOS -7);
	printw("    ██");

	move(MID_YPOS +3, MID_XPOS -7);
	printw("██████");
}

void draw_six()
{
	move(MID_YPOS -1, MID_XPOS);
	printw("██████");

	move(MID_YPOS, MID_XPOS);
	printw("██    ");

	move(MID_YPOS +1, MID_XPOS);
	printw("██████");

	move(MID_YPOS +2, MID_XPOS);
	printw("██  ██");

	move(MID_YPOS +3, MID_XPOS);
	printw("██████");
}
