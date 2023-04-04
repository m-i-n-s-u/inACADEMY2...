#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100]={0},insert,i,avg,amount,sum=0,imsi,k,j;
    scanf("%d",&amount);
    for(i=0;i<amount;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    avg=sum/amount;

    scanf("%d",&a[amount]);

    k=a[amount]; // 내가 입력하고 싶은 값

    for(i=0;i<amount;i++){
        for(j=i+1;j<=amount;j++){
            if(a[i]>a[j]){
                imsi=a[i];
                a[i]=a[j];
                a[j]=imsi;
            }
        }
    }
    if(k>avg){
        for(i=0;i<amount;i++)
            printf("%d ",a[i]);
    }
    else if(k<avg){
        for(i=1;i<amount+1;i++)
            printf("%d ",a[i]);
    }



    return 0;
}
