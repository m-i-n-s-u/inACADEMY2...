#include <stdio.h>
#include <stdlib.h>

int main()
{

/*

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    */


    int num,k,i,j,space=1;
    scanf("%d",&num);



    for(i=0;i<num;i++)
        printf("*");
        printf("\n");

    for(i=0;i<num/2;i++){
        for(j=i;j<num/2;j++)
            printf("*");

        for(k=0;k<space;k++){
            printf(" ");
        }space=space+2;

        j--;
        for(j=i;j<num/2;j++)
            printf("*");

        printf("\n");
        }
    space=num/2;

    //¾Æ·¡
    for(i=0;i<num/2-1;i++){
        for(j=0;j<=i+1;j++)
            printf("*");
        for(k=0;k<space;k++){
            printf(" ");
        }space=space-2;
        j--;
        for(j=0;j<=i+1;j++)
            printf("*");
            printf("\n");

    }
    for(i=0;i<num;i++)
        printf("*");






    return 0;
}
