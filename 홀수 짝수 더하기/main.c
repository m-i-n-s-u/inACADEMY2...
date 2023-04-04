#include <stdio.h> //È¦¼ö Â¦¼ö ´õÇÏ±â
#include <stdlib.h>

int main()
{
    int n,m,result;
    scanf("%d %d",&m,&n);
    if(m%2==0)
        printf("Â¦¼ö+");
    else
        printf("È¦¼ö+");

    if(n%2==0)
        printf("Â¦¼ö=");
    else
        printf("È¦¼ö=");

    if((m+n)%2==0)
        printf("Â¦¼ö");
    else
        printf("È¦¼ö");

    return 0;
}
