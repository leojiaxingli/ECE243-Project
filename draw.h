#ifndef DRAW_H
#define DRAW_H

void wait_for_vsync();
void clear_screen();
void plot_pixel(int x, int y, short int line_color);
short int rgb24to16(short int r8,short int g8, short int b8);
void draw_line(int x0, int y0, int x1,int y1, short int color);
void swap(int*p1 ,int *p2);
void draw_rectangle(int x,int y,int w,int h, short int color);
void fill_rectangle(int x,int y,int w,int h, short int color);

#endif