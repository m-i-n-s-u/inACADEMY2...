#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int garo,sero,rain,y,x,ground[20][20];

    scanf("%d %d %d",&garo,&sero,&rain);

    for(y=0;y<sero;y++){
        for(x=0;x<garo;x++){
            scanf("%d",&ground[y][x]);
        }
    }

    for(y=0;y<sero;y++){
        for(x=0;x<garo;x++){
            if(ground[y][x]<=rain+1)
                ground[y][x]=-1;
        }
    }
    for(y=0;y<sero;y++){
        for(x=0;x<garo;x++){
            printf("%d ",ground[y][x]);
        }printf("\n");
    }

    return 0;
}
