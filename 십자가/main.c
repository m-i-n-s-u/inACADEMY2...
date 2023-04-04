#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num,i,j;
    scanf("%d",&num);

    for(i=0;i<num;i++)
        printf("*");
        printf("\n");

    for(j=0;j<num/2-1;j++){
        printf("*");
        for(i=0;i<num/2-1;i++)
            printf(" ");
        printf("*");
        for(i=0;i<num/2-1;i++)
            printf(" ");
        printf("*");
        printf("\n");
    }

    for(i=0;i<num;i++)
        printf("*");
        printf("\n");


    for(j=0;j<num/2-1;j++){
        printf("*");
        for(i=0;i<num/2-1;i++)
            printf(" ");
        printf("*");
        for(i=0;i<num/2-1;i++)
            printf(" ");
        printf("*");
        printf("\n");
    }

    for(i=0;i<num;i++)
        printf("*");
        printf("\n");




    return 0;
}
