#include <stdio.h>//ºø±Ý2
#include <stdlib.h>

int main()
{
    int i,x,y,n,m,a[100][100]={0},k=1,t=0;
    scanf("%d %d",&m,&n);

    while(t<=n-1){
    for(y=m-1,x=t;y>=0,x>=0;y--,x--){
        a[y][x]=k++;
    }t++;
    }
    t=m-2;
    k--;
    while(t>=0){
    for(y=t,x=n-1;y>=0;y--,x--){
        a[y][x]=k++;
    }t--;
    }
    k--;
    for(y=0;y<m;y++){
        for(x=0;x<n;x++){
            printf("%d ",a[y][x]);
        }printf("\n");
    }


    return 0;
}
