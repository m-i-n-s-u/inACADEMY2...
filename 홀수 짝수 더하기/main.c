#include <stdio.h> //�汝� 礎熱 渦ж晦
#include <stdlib.h>

int main()
{
    int n,m,result;
    scanf("%d %d",&m,&n);
    if(m%2==0)
        printf("礎熱+");
    else
        printf("�汝�+");

    if(n%2==0)
        printf("礎熱=");
    else
        printf("�汝�=");

    if((m+n)%2==0)
        printf("礎熱");
    else
        printf("�汝�");

    return 0;
}
