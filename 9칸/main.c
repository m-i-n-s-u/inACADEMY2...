#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int arr[10][10]={0},score[10][10]={0},sero,garo,x,y,max=0;
    scanf("%d %d",&sero,&garo);
    for(y=0;y<sero;y++){
        for(x=0;x<garo;x++){
            scanf("%d",&arr[y][x]);
        }
    }
    for(y=0;y<sero;y++){
        for(x=0;x<garo;x++){
            score[y][x]=arr[y][x]+arr[y-1][x]+arr[y][x-1]+arr[y+1][x] +arr[y][x+1]+arr[y-1][x-1]+arr[y-1][x+1]+arr[y+1][x+1]+arr[y+1][x-1];
            if(score[y][x]>=max)
               max=score[y][x];}
    }
    printf("%d",max);

    return 0;
}
