#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,nmg[15],num[15],result[100],k[100]={0},cnt=0,sum;
    for(i=0;i<10;i++)
        scanf("%d",&num[i]);
    for(i=0;i<10;i++)
        nmg[i]=num[i]%42;
    for(i=0;i<9;i++){
            if(k[nmg[i]]==0){
                    k[nmg[i]]=1;
                    cnt++;
                    }



    }
    printf("%d",cnt);

    return 0;
}
