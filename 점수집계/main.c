#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num,a[100]={0},sum=0,i,j,imsi;


    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                imsi=a[i];
                a[i]=a[j];
                a[j]=imsi;

            }}}


    if(a[3]-a[1]>=4)
        printf("kin");

    else
        printf("%d",sum);

    return 0;
}
