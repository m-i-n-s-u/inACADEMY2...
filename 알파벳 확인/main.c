#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");

    char input;
    fscanf(in,"%c",&input);
    if(input>=65 &&input<=90)
        fprintf(out,"대문자");
    else if(input>=97 && input<=122)
        fprintf(out,"소문자");

    return 0;
}
