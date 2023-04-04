#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k=2,result[10]={0},a=0,i=0,cnt=0;
    scanf("%d",&n);

    while(1){
        if(n%k==0){
            result[i++]=k;
            n=n/k;
            k=2;
            cnt++;
            continue;
        }k++;
        if(n==k)
        break;

    }
    result[cnt]=k;
    for(i=0;i<=cnt;i++)
        printf("%d ",result[i]);

    return 0;
}
