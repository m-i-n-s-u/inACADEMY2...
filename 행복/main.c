#include <stdio.h> //วเบน
#include <stdlib.h>

int main()
{;
    int i,j,imsi,num[50],n;
    scanf("%d",&n);


    for(i=0;i<n;i++){
      scanf("%d",&num[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(num[i]>num[j]){
                imsi=num[i];
                num[i]=num[j];
                num[j]=imsi;
            }
        }
    }
    printf("%d",num[n-1]-num[0]);

    return 0;
}
