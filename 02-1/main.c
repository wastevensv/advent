/*
 * Day 2, Challenge 1 - Elve's Box Challenge.
 * 2015-07-12 (December 7, 2015)
 * William A Stevens V (wastevensv)
 */


#include <stdio.h>

int main( int argc, char *argv[]) {
    int w, h, l = 0;
    int total = 0;
    while(scanf("%i x %i x %i",&w,&h,&l) != EOF) {
        int sa = 2*l*w + 2*w*h + 2*h*l; // Calculate base surface area.
        if (l*w <= w*h && l*w <= h*l) { // Acccounting for slack.
            sa += l*w;
        } else if (w*h <= l*w && w*h <= h*l) {
            sa += w*h;
        } else if (h*l <= l*w && h*l <= w*h) {
            sa += h*l;
        }
        total += sa; // Add to total surface area.
    }
    printf("%d\n",total); // Print total surface area.
    return 0;
}
