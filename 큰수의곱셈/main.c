#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sma,big,result;
    scanf("%d %d",&sma,&big);
    result=sma;

    while(sma<big){
        sma=sma+1;
        result=result*sma;
    }
    printf("%d",result);
    return 0;
}
