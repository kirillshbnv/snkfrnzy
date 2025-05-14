#include "../include/raster.h"

/***************/
/* BITMAP DATA */
/***************/

UINT16 snake_head_up[SNAKE_HEAD_HEIGHT] = {
	0xFFFF,
	0xFFFF,
	0xC183,
	0xDDBB,
	0xD5AB,
	0xDDBB,
	0xC183,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF
};

UINT16 snake_head_down[SNAKE_HEAD_HEIGHT] = {
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xC183,
	0xDDBB,
	0xD5AB,
	0xDDBB,
	0xC183,
	0xFFFF,
	0xFFFF
};

UINT16 snake_head_left[SNAKE_HEAD_HEIGHT] = {
	0xFFFF,
	0xFFFF,
	0xC1FF,
	0xDDFF,
	0xD5FF,
	0xDDFF,
	0xC1FF,
	0xFFFF,
	0xFFFF,
	0xC1FF,
	0xDDFF,
	0xD5FF,
	0xDDFF,
	0xC1FF,
	0xFFFF,
	0xFFFF
};

UINT16 snake_head_right[SNAKE_HEAD_HEIGHT] = {
	0xFFFF,
	0xFFFF,
	0xFF83,
	0xFFBB,
	0xFFAB,
	0xFFBB,
	0xFF83,
	0xFFFF,
	0xFFFF,
	0xFF83,
	0xFFBB,
	0xFFAB,
	0xFFBB,
	0xFF83,
	0xFFFF,
	0xFFFF
};

UINT16 snake_body_up[SNAKE_BODY_HEIGHT] = {
	0x0000,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF
};

UINT16 snake_body_down[SNAKE_BODY_HEIGHT] = {
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0xFFFF,
	0x0000
};

UINT16 snake_body_left[SNAKE_BODY_HEIGHT] = {
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF,
	0x7FFF
};

UINT16 snake_body_right[SNAKE_BODY_HEIGHT] = {
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE,
	0xFFFE
};

UINT16 spike[SPIKE_HEIGHT] = {
	0x0180,
	0x0180,
	0x03C0,
	0x03C0,
	0x07E0,
	0x07E0,
	0x0FF0,
	0x1FF8,
	0x1FF8,
	0x3FFC,
	0x3FFC,
	0x7FFE,
	0x7FFE,
	0xFFFF,
	0xFFFF,
	0xFFFF
};

UINT8 bug[BUG_HEIGHT] = {
	0x81,
	0xDB,
	0x7E,
	0x3C,
	0xFF,
	0x3C,
	0xDB,
	0x81
};

UINT16 border_segment[BORDER_SEG_HEIGHT] = {
	0xAAAA,
	0x5555,
	0xAAAA,
	0x5555,
	0xAAAA,
	0x5555,
	0xAAAA,
	0x5555,
	0xAAAA,
	0x5555,
	0xAAAA,
	0x5555,
	0xAAAA,
	0x5555,
	0xAAAA,
	0x5555
};


void plot_border_seg(UINT8 screen, int x, int y);

void plot_bitmap_8x8(UINT8 screen, int x, int y, UINT8 bitmap_8x8);

void plot_bitmap_16x16(UINT8 screen, int x, int y, UINT16 bitmap_16x16);


/************************/
/* HIGH-LEVEL FUNCTIONS */
/************************/

void clear_screen(UINT8 screen) {

}

void plot_pixel(UINT8 screen, int x, int y) {

}

void plot_vert_line(UINT8 screen, int x, int y1, int y2) {

}

void plot_horiz_line(UINT8 screen, int x1, int x2, int y) {

}

void plot_border(UINT8 screen) {

}

void plot_snake_head(UINT8 screen, int x, int y, UINT8 direction) {

}

void plot_snake_body(UINT8 screen, int x, int y, UINT8 direction) {

}

void plot_bug(UINT8 screen, int x, int y) {

}

void plot_spike(UINT8 screen, int x, int y) {

}


/**********************/
/* MID-LEVEL FUNCTIONS*/
/**********************/

void plot_border_seg(UINT8 screen, int x, int y) {

}

void plot_bitmap_8x8(UINT8 screen, int x, int y, UINT8 bitmap_8x8) {

}

void plot_bitmap_16x16(UINT8 screen, int x, int y, UINT16 bitmap_16x16) {

}

/***********************/
/* LOW-LEVEL FUNCTIONS */
/***********************/

int get_byte_offset(int x) {
    return x >> 3;
}

int get_bit_offset(int x) {
    return 7 - (x & 7);
}

int get_row_offset(int y) {
    return y * 80;
}