#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,up,down,amount,x,y,apt[5][5],cnt=0;
    scanf("%d %d %d",&n,&up,&down);

    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            scanf("%d",&apt[y][x]);
        }
    }

    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            if(apt[y][x]<up && apt[y][x]>down)
                cnt++;
        }
    }
    printf("%d",cnt);



    return 0;
}
