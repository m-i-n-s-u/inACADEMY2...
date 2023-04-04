#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");
    int i;
    float num,sum=0,avg;
    for(i=0;i<11;i++){
        fscanf(in,"%f",&num);
        sum=sum+num;
    }
        avg=sum/12;
        fprintf(out,"%.2f",avg);


    return 0;
}
