#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='c';
    if(ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ){

      printf("%c is vowel\n", ch);

    }else{

    printf("%c is consonant\n", ch);
    }
    return 0;
}
