#ifndef RASTER_H
#define RASTER_H

#include "globals.h"
#include "consts.h"

void clear_screen(UINT8 screen);

void plot_border(UINT8 screen);

void plot_snake_head(UINT8 screen, int x, int y, UINT8 direction);

void plot_snake_body(UINT8 screen, int x, int y, UINT8 direction);

void plot_bug(UINT8 screen, int x, int y);

void plot_spike(UINT8 screen, int x, int y);

#endif /* RASTER_H */