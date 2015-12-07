/*
 * Day 2, Challenge 2 - Elve's Ribbon Challenge.
 * 2015-07-12 (December 7, 2015)
 * William A Stevens V (wastevensv)
 */


#include <stdio.h>

int main( int argc, char *argv[]) {
    int w, h, l = 0;
    int total = 0;
    while(scanf("%i x %i x %i",&w,&h,&l) != EOF) {
        int rb = l*w*h; // Calculate volume.
        if (l*w <= w*h && l*w <= h*l) { // Calculate shortest perimeter.
            rb += 2*l+2*w;
        } else if (w*h <= l*w && w*h <= h*l) {
            rb += 2*w+2*h;
        } else if (h*l <= l*w && h*l <= w*h) {
            rb += 2*h+2*l;
        }
        total += rb; // Add to total ribbon.
    }
    printf("%d\n",total); // Print total ribbon.
    return 0;
}
