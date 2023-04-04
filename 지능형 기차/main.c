#include <stdio.h>//지능형 기차
#include <stdlib.h>

int main()
{
    int exit[4],enter[4],i,max,sum=0;

    for(i=0;i<4;i++){
        scanf("%d %d",&exit[i],&enter[i]);
    }

    max=enter[0];

    for(i=0;i<4;i++){
            sum=sum+enter[i]-exit[i];

            if(sum>max)
                max=sum;

    }
    printf("%d",max);
    return 0;
}
