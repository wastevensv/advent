#ifndef POINT_H
#define POINT_H


// A 2D Point with an extra feild for counting the 'visits' to that point.
struct Point {
    int x;
    int y;
    int visits;
};

// A contructor for a single point.
struct Point pt_new(int x, int y) {
    struct Point p;
    p.x = x;
    p.y = y;
    p.visits = 0;
    return p;
}

// Test for equality between two points.
int pt_equ(struct Point a, struct Point b) {
    return a.x == b.x && a.y == b.y;
}

// 'Visit' a specific point (pass by reference).
void pt_visit(struct Point *p) {
    p->visits += 1;
    return;
}

#endif
