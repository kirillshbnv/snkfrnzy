#include "../include/raster.h"
#include <stdio.h>
#include <osbind.h>

int main() {
    UINT8 *screen = Physbase();
    clear_screen(screen);
    printf("Hello World\n");
    return 0;
}