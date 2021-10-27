#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int array[10000];
    int i = 0;
    int m;

    rewind(stdin);
    printf("Vvedite chisla: \n");
    do {
        if (scanf("%d", &m) != 1) {
            printf("Fignya");
            return 0;
        } else {
            array[i] = m;
            i++;
        }
    }
    while (m != -1);
    if (i == 0) array[i + 1] = -1;
        int max = 0;
        for (int b = 0; b < i + 1; b++) {
            if (array[b] > max) {
            max = array[b];
        }
    }   
    for (int j = 0; j < 1; j++) {
     printf("MAX = %d\n", max);
    
     }
}