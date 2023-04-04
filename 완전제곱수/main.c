#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,cnt,j;
    scanf("%d",&n);

    for(a=1;a<n;a++){
        for(b=1;b<n;b++){
            if(a*a-n==b*b)
            cnt++;

        }
    }
    printf("%d",cnt);

    return 0;
}
