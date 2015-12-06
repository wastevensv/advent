/*
 * Day 1, Challenge 2 - Parens error detector.
 * 2015-06-12 (December 6, 2015)
 * William A Stevens V (wastevensv)
 */
#include <stdio.h>

int main( int argc, char *argv[]) {
    char    c = '\0';   // Current character in buffer.
    int     n = 0;      // Floor number.
    int     p = 1;      // Position counter.
    while(c != EOF) {
        c = getchar(); // Get next character in buffer.
        if(c == '(') n++; // ( - Increment floor
        if(c == ')') n--; // ) - decrement floor
        if(n < 0) { // If extra closing parens detected, output position.
            printf("%d\n",p);
            break;
        }
        p++; // Increment position counter.
    }
    return 0;
}
