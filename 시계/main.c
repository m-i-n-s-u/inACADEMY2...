#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h[10],m[10],clock[10],i,j,imsi,originalh[10],originalm[10];
    for(i=0;i<5;i++){
        scanf("%d:%d",&h[i],&m[i]);
    }
    for(i=0;i<5;i++){
        originalh[i]=h[i];
        originalm[i]=m[i];
    }


    //시 변환
    for(i=0;i<5;i++){
        if(h[i]>=12)
            h[i]=h[i]-12;
    }
    //분 변환
    for(i=0;i<5;i++){
        m[i]=m[i]/5;
    }

    for(i=0;i<5;i++){
        if(h[i]-m[i]>0)
            clock[i]=h[i]-m[i];
        else
            clock[i]=m[i]-h[i];

    }

    for(i=0;i<5;i++){
        if(clock[i]>6){
            clock[i]=clock[i]-6;
        }
    }

    for(i=0;i<4;i++){
            for(j=i+1;j<5;j++){
                    if(clock[i]>clock[j]){
                    imsi=clock[i];
                    clock[i]=clock[j];
                    clock[j]=imsi;

                    imsi=originalh[i];
                    originalh[i]=originalh[j];
                    originalh[j]=imsi;

                    imsi=originalm[i];
                    originalm[i]=originalm[j];
                    originalm[j]=imsi;
                    }

            }

    }
    printf("%d:%d",originalh[2],originalm[2]);


    return 0;
}
