/*
 * Day 3, Challenge 1 - Santa Map.
 * 2015-07-12 (December 7, 2015)
 * William A Stevens V (wastevensv)
 */


#include <stdio.h>
#include "point.h"

#define MAX_POINTS 10240

int main( int argc, char *argv[]) {
    struct Point pt; // Current point.
    struct Point pts[MAX_POINTS]; // Points visited.
    char c = '\0'; // Current character in file.
    int  x,y = 0; // Current coordinates.
    int  unique = 0; // Number of unique points.
    while(c != EOF && c != '\n') { // While not at the end of file.
        pt = pt_new(x,y); // Set current position.
        int f = 0; // Indicates if duplicate found.
        for(int i = 0; i < unique; i++) { // Search for duplicate.
            if( pt_equ(pt, pts[i]) ) {
                pt_visit(&pts[i]);
                f=1;
                break;
            }
        }
        if( !f ) { // If this is a unique point, add it to the list.
            pt_visit(&pt);
            pts[unique] = pt;
            unique += 1;
        }
        printf("%d,%d %d\n",pt.x, pt.y, unique); // Print point for debugging.
        c = getchar(); // Get next instruction.
        if(c=='>') x += 1; // Adjust according to instruction.
        if(c=='<') x -= 1;
        if(c=='^') y += 1;
        if(c=='v') y -= 1;
    }
    printf("%d\n",unique); // Print final result.
    return 0;
}
