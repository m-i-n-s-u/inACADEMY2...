#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num,num8[100],i=0,cnt=0;
    int n,num16[100];

    scanf("%d",&num);
    n=num;


    while(n%8!=0){
        num8[i++]=n%8;
        n=n/8;
        cnt++;
    }
    for(i=cnt-1;i>=0;i--)
        printf("%d",num8[i]);

    printf("\n");

    cnt=0;
    i=0;
    n=num;


    while(n%16!=0){
        num16[i++]=n%16;
        n=n/16;
        cnt++;
    }
    for(i=cnt-1;i>=0;i--){
        printf("%d",num16[i]);

    }


    return 0;
}
