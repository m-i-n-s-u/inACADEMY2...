#include <stdio.h>//소수판별
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
        if(cnt==2)
            printf("prime");
        else
            printf("not prime");


    return 0;
}
