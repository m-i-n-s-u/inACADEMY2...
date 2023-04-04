#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("INPUT.TXT","r");
    FILE *out=fopen("OUTPUT.TXT","w");

    char a;
    fscanf(in,"%c",&a);
    if(a>=65 && a<=90)
        fprintf(out, "%c",a+32);
    else if(a>=97 && a<=122)
        fprintf(out, "%c",a-32);


    return 0;
}
