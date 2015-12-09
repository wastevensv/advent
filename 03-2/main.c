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
    int  sx = 0; // Current coordinates of Santa
    int  sy = 0;
    int  rx = 0; // Current coordinates of RoboSanta.
    int  ry = 0;
    int  unique = 0; // Number of unique points.
    int  robo   = 0; // Indicates if its robosantas turn.
    while(c != EOF && c != '\n') { // While not at the end of file.
        if(robo) {
            pt = pt_new(rx,ry); // Set robo current position.
        } else {
            pt = pt_new(sx,sy); // Set santa current position.
        }
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
        printf("%d - %d,%d %d\n", robo, pt.x, pt.y, unique); // Print point for debugging.
        
        robo = !robo; // Switch turns.
        c = getchar(); // Get next instruction.
        if(robo) {
            if(c=='>') rx += 1; // Adjust according to instruction.
            if(c=='<') rx -= 1;
            if(c=='^') ry += 1;
            if(c=='v') ry -= 1;
        } else {
            if(c=='>') sx += 1; // Adjust according to instruction.
            if(c=='<') sx -= 1;
            if(c=='^') sy += 1;
            if(c=='v') sy -= 1;
        }
    }
    printf("%d\n",unique); // Print final result.
    return 0;
}
