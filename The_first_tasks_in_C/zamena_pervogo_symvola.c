#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    char *tmp;
    rewind(stdin);
    char *q = (char*)  malloc(sizeof(char));
    int c = 0;
    do {
        ch = getchar();
        q[c] = ch;
        
        tmp = (char*) realloc(q, (c +2)*sizeof(char));
        if (tmp == NULL) {
            printf("n/a"); 
            break;
        }
        q = tmp;
        //printf("!    %c\n", q[c]);
        if (q[0] >= 97 && q[0] <= 122) {
            q[0] = q[0] -32;
        }
        if (q[c] >= 97 && q[c] <= 122 && q[c-1] == 32 && q[c+1] != '\n') {
            q[c] = q[c] -32;
        }
        c++;
    } while (ch != '\n');
    int i;
    for (i = 0; i < c; i++) {
        printf("%c", q[i]);
    }
}
