#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,x[10],y[10],RX[10],RY[10],sum=0;
    scanf("%d",&num);

    for(i=0;i<num;i++)
        scanf("%d %d",&x[i],&y[i]);

    for(i=0;i<num;i++){
        RX[i]=x[i+1]-x[i];

        if(RX[i]<0)
            RX[i]=RX[i]*-1;

    }

    for(i=0;i<num;i++){
        RY[i]=y[i+1]-y[i];

        if(RY[i]<0)
            RY[i]=RY[i]*-1;

    }

    for(i=0;i<num-1;i++){
            sum=sum+RX[i]+RY[i];

    }
    sum=sum+x[0]+y[0];

    printf("%d",sum);







    return 0;
}
