#include <stdio.h>
#include <string.h>

int main(void)
{
    char Stroka1[] = "12345";
    char Stroka2[] = "abcde";
    int N = strlen(Stroka1) - 1;
    int i;
    for (i = 0; i < 5; i++) 
        printf("%c%c", Stroka1[N-i], Stroka2[i]);
    return 0;
} 
