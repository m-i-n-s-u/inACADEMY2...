#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");
    int length;
    char a[1000]={0};

    fgets(a,1000,in);
    length=strlen(a);

    fprintf(out,"%c %c",a[0],a[length-2]);
    fprintf(out, "%d",length);



    return 0;
}
