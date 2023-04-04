#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,a[100]={0},j,t=0,k=0,cnt=0;
    scanf("%d",&num);

    while(cnt<num){

    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            a[k++]=i;
            a[k++]=j;
            cnt++;
            t=t+2;
        }}}


    for(i=0;i<t;i++){
        printf("%d",a[i]);
    }

    return 0;
}
