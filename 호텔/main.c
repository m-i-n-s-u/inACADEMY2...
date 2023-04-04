#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int x,y,ho,cheung,guest,j=0,hotel[20][20]={0},k=101,ch=100,cnt;

    scanf("%d %d %d",&ho,&cheung,&guest);

    for(y=cheung-1;y>=0;y--){
        for(x=0;x<ho;x++){
            hotel[y][x]=k++;
        }k=101+ch;
        ch=ch+100;

    }

for(x=0;x<ho;x++){
    for(y=cheung-1;y>=0;y--){
            j++;
            if(j==guest)
                break;


        }if(j==guest)
                break;
    }


    printf("%d",hotel[y][x]);
    return 0;
}
