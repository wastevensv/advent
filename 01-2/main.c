#include <stdio.h>

int main( int argc, char *argv[]) {
    char    c = '\0';
    int     n = 0;
    int     p = 1;
    while(c != EOF) {
        c = getchar();
        if(c == '(') n++;
        if(c == ')') n--;
        if(n < 0) {
            printf("%d\n",p);
            break;
        }
        p++;
    }
    return 0;
}
