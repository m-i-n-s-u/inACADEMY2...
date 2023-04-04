#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int i=1,arr[10][10],num,x,y,direction=0; // direction=1>坷弗率俊辑 场车促. 0=>哭率俊辑 场车促.
    scanf("%d",&num);
    for(y=0;y<num;y++){
        if(direction==1){
                for(x=num-1;x>=0;x--){
                    arr[y][x]=i++;
                }
                direction=0;
        }
        else if(direction==0){
            for(x=0;x<num;x++){
                    arr[y][x]=i++;
                }
                direction=1;
        }
    }
    for(y=0;y<num;y++){
        for(x=0;x<num;x++){
            printf("%d\t",arr[y][x]);
        }printf("\n");
    }



    return 0;
}
