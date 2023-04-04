#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int i,score,sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&score);
        sum=sum+score;
    }
    for(i=0;i<10;i++){
        scanf("%d",&score);
        sum=sum+score;
    }
    printf("%d",sum);


    return 0;
}
