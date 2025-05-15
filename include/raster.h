#ifndef RASTER_H
#define RASTER_H

#include "globals.h"
#include "consts.h"

void clear_screen(UINT8 *screen);

void plot_pixel(UINT8 *screen, int x, int y);

void plot_vert_line(UINT8 *screen, int x, int y1, int y2);

void plot_horiz_line(UINT8 *screen, int x1, int x2, int y);

void plot_border(UINT8 *screen);

void plot_snake_head(UINT8 *screen, int x, int y, UINT8 direction);

void plot_snake_body(UINT8 *screen, int x, int y, UINT8 direction);

void plot_bug(UINT8 *screen, int x, int y);

void plot_spike(UINT8 *screen, int x, int y);

#endif /* RASTER_H */