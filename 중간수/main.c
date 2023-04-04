#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sum=0,same=0,t=0;
    scanf("%d",&n);

    for(i=1;i<n;i++)
        sum=sum+i;


    for(i=n+1;i<n+20;i++){
        same=same+i;
        if(same==sum)
            t=1;
    }
    if(t==1)
        printf("O");

    else
        printf("X");





    return 0;
}
