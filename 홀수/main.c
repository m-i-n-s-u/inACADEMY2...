#include <stdio.h>//È¦¼ö
#include <stdlib.h>

int main()
{
    int a[8],b[8],i,sum=0,j=0,cnt=0,imsi;

    for(i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++){
        if(a[i]%2!=0){
            b[j++]=a[i];
            cnt++;
        }
    }
    for(i=0;i<cnt-1;i++){
        for(j=i+1;j<cnt;j++){
            if(b[i]>b[j]){
                imsi=b[i];
                b[i]=b[j];
                b[j]=b[i];



            }
        }
    }
    for(i=0;i<cnt;i++){
        sum=sum+b[i];
    }
    if(cnt==0)
        printf("-1");
    else
    printf("%d\n%d",sum,b[0]);

    return 0;
}
