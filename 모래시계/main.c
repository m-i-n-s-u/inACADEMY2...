#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    //À§
    int num,x,y,space,star,k=0,t;
    scanf("%d",&num);
    t=num;
    for(y=0;y<num/2+1;y++){

            for(space=0;space<k;space++){
                printf(" ");
            }k++;

            for(star=0;star<t;star++){
                printf("*");
            }t=t-2;
            printf("\n");

    }

    //¾Æ·¡
    k=num/2-1;
    t=num/2+1;
    for(y=0;y<num/2;y++){
        for(space=0;space<k;space++){
            printf(" ");
        }k--;

        for(star=0;star<t;star++){
            printf("*");
        }t=t+2;
        printf("\n");
    }

    return 0;
}
