#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int i,j,num,count=1;
    scanf("%d",&num);

    for(i=0;i<num;i++){
        for(j=i;j<num-1;j++)
            printf(" ");

        for(j=1;j<=count;j++)
            printf("*");

        count=count+2;
        printf("\n");
    }





;
    return 0;
}
