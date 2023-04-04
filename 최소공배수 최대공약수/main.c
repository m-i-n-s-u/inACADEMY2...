#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int m,n,c,chd,chs,i,j;
    scanf("%d %d",&m,&n);
    i=m;
    j=n;
    c=m%n;
    while(c!=0){
        m=n;
        n=c;
        c=m%n;
    }
    chd=n;
    chs=i*j/chd;

    printf("%d %d",chd,chs);



    return 0;
}
