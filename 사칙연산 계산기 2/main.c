#include <stdio.h>//사칙연산 계산기
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d",&m,&n);
    printf("%d+%d=%d\n",m,n,m+n);
    printf("%d-%d=%d\n",m,n,m-n);
    printf("%d*%d=%d\n",m,n,m*n);
    printf("%d/%d=%d\n",m,n,m/n);

    return 0;
}
