#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num[50],numS[50],j,c=1,t=0,k,cnt=0;
    scanf("%d",&k);

    for(i=0;i<49;i++){
        num[i]=(i+1)*4+1; //4N+1 ÀüºÎ´Ù
    }
    for(i=0;i<49;i++){
            for(j=2;j<num[i];j++){
                if(num[i]/j==0){
                    c=0;
                    break;

                }}if(c==1){
                numS[t++]=num[i];
                cnt++;

            }

    }

        printf("%d",numS[k-1]);
    return 0;
}
