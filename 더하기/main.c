#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");
    int i,sum=0,num,numbers;
    fscanf(in,"%d",&num);
    for(i=0;i<num;i++){
        fscanf(in,"%d",&numbers);
        sum=sum+numbers;
        }
        fprintf(out,"%d",sum);
    return 0;
}
