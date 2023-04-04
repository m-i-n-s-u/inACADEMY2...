#include <stdio.h> // 백설공주와 난장이
#include <stdlib.h>

int main()
{
    int i,num[8],j,imsi;
    for(i=0;i<7;i++){
            scanf("%d",&num[i]);
    }
    for(i=0;i<6;i++){
        for(j=i+1;j<7;j++){
            if(num[i]>num[j]){
                imsi=num[i];
                num[i]=num[j];
                num[j]=imsi;
            }
        }
    }
    printf("%d\n%d",num[6],num[5]);
    return 0;
}
