#include <stdio.h>

int main( int argc, char *argv[]) {
    char    c='\0';
    int     n=0;
    while(c != EOF) {
        c = '\0';
        n = 0;
        while(c != '\n') {
            c = getchar();
            if(c == '(') n++;
            if(c == ')') n--;
            if(c == EOF) break;
        }
        printf("%d\n",n);
    }
    return 0;
}
