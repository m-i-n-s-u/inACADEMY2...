#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,first,second,a[10],j,imsi;
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);

    for(i=0;i<6;i++)
        for(j=i+1;j<7;j++)
                if(a[i]>a[j]){
                    imsi=a[i];
                    a[i]=a[j];
                    a[j]=imsi;
                }


    first=a[6];
    second=a[5];
    printf("%d\n%d",first,second);




    return 0;
}

