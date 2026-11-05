#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch1='a';
    char ch2='e';
    char ch3='i';
    char ch4='o';
    char ch5='u';
    char n;

    scanf("%c", &n);

        if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
            {
                printf("Vowel",n);
            }
        else
            {
                printf("Consonant",n);
            }

    return 0;
}
