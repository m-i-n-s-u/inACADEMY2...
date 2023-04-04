#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cnt=0,c=0,namerge[50]={0},nam[50]={0},i=0,k=0,j=0;
    scanf("%d",&num);

    while(num/2!=0){
        c=num%2;
        num=num/2;
        namerge[i++]=c;
        cnt++;
    }
    namerge[i]=num%2;

    for(i=cnt;i>=0;i--){
        nam[k++]=namerge[i];
    }


    for(i=0;i<=cnt;i++){
        j++;
        if(nam[i]==1)
            printf("%d ",j);
    }


    return 0;
}
