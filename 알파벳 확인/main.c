#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");

    char input;
    fscanf(in,"%c",&input);
    if(input>=65 &&input<=90)
        fprintf(out,"�빮��");
    else if(input>=97 && input<=122)
        fprintf(out,"�ҹ���");

    return 0;
}
