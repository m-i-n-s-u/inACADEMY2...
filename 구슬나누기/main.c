#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num,i,sum=0,a[100],count=0,same,result;

    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    same=sum/num;

    for(i=0;i<num;i++){
        if(a[i]>=same)
            count=count+a[i]-same;
        else if(same>a[i])
            count=count+same-a[i];
    }
    result=count/2;
    printf("%d",result);

    return 0;
}
