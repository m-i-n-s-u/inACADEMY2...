#include <stdio.h>//¿∑≥Ó¿Ã
#include <stdlib.h>

int main()
{
    int i,j,y[3][4],result,bae=0,deung=0;

    for(i=0;i<3;i++){
            for(j=0;j<4;j++){
                scanf("%d",&y[i][j]);
            }

    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(y[i][j]==0)
                bae++;
            else
                deung++;

        }if(bae==1)
            printf("A\n");
        else if(bae==2)
            printf("B\n");
        else if(bae==3)
            printf("C\n");
        else if(bae==4)
            printf("D\n");
        else
            printf("E\n");
        bae=0;
        deung=0;
    }

    return 0;
}
