/*
 * Day 1, Challenge 1 - Parens pair counter.
 * 2015-06-12 (December 6, 2015)
 * William A Stevens V (wastevensv)
 */


#include <stdio.h>

int main( int argc, char *argv[]) {
    char    c='\0'; // Current character in buffer.
    int     n=0;    // Current floor.
    while(c != EOF) {
        c = '\0';
        n = 0;
        while(c != '\n') {
            c = getchar(); // Get next character in buffer.
            if(c == '(') n++; // ( - Increment floor
            if(c == ')') n--; // ) - decrement floor
            if(c == EOF) break; // Break on EOF.
        }
        printf("%d\n",n); // Print the floor at the end of each line.
    }
    return 0;
}
