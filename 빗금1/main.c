#include <stdio.h>//ºø±Ý Ã¤¿ì±â
#include <stdlib.h>

int main()
{
    int x,y,i,j,n,m,a[100][100]={0},t=1;
    scanf("%d %d",&m,&n);

    for(i=m-1+n-1;i>=0;i--){
            for(y=m-1;y>=0;y--){
                for(x=0;x<n;x++){
                    if(y+x==i){
                        a[y][x]=t++;
                    }
                }
            }

    }
    for(y=0;y<m;y++){
        for(x=0;x<n;x++){
            printf("%d",a[y][x]);
        }printf("\n");
    }




    return 0;
}
