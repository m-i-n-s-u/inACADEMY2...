#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,c,sum=0,t;
    scanf("%d",&num);

    t=num;

    while(1){

    while(t>10){
        t=num/10;
        c=num%10;
        sum=sum+c;
        num=t;

    }sum=sum+t;
    num=sum;

    if(sum<10 && sum>0)
        break;

    sum=0;
    }
    printf("%d ",sum);

    return 0;
}
