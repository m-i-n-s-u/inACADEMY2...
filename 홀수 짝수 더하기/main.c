#include <stdio.h> //Ȧ�� ¦�� ���ϱ�
#include <stdlib.h>

int main()
{
    int n,m,result;
    scanf("%d %d",&m,&n);
    if(m%2==0)
        printf("¦��+");
    else
        printf("Ȧ��+");

    if(n%2==0)
        printf("¦��=");
    else
        printf("Ȧ��=");

    if((m+n)%2==0)
        printf("¦��");
    else
        printf("Ȧ��");

    return 0;
}
