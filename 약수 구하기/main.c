#include <stdio.h>//약수구하기
#include <stdlib.h>

int main()
{
    int num,i=1,a[50],j=0,cnt=0;
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        if(num%i==0){
            a[j++]=i;
            cnt++;;
    }}

    for(i=0;i<cnt;i++){
        printf("%d ",a[i]);
    }


    return 0;
}
