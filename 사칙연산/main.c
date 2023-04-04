#include <stdio.h>//사칙연산 계산기
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int m,n,c;
    scanf("%d%c%d",&m,&c,&n);



    if(n=='+'&&n!=0)
        printf("%d",m+n);

    else if(n=='-'&&n!=0)
        printf("%d",m-n);

    else if(n=='*'&&n!=0)
        printf("%d",m*n);

    else if(n=='/'&&n!=0)
        printf("%d",m/n);
    else if(n==0)
        printf("impossible");




    return 0;
}
