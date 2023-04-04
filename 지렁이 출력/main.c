#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,arr[10][10],y=0,x=0,cnt=0,k=0;
    scanf("%d",&num);

    //À­ ºÎºÐ
    while(cnt<num){

    if(cnt%2==0 ||cnt==0){
        for(y=0;y<=cnt;y++){
            for(x=0;x<=cnt;x++){
                if(y+x==cnt)
                    arr[y][x]=k++;
            }}}

    else
        {
        for(y=cnt;y>=0;y--){
            for(x=0;x<=cnt;x++){
                if(y+x==cnt)
                    arr[y][x]=k++;
            }}}
    cnt++;
    }
    //¾Æ·§ºÎºÐ
    while(cnt<num+num-1){
    if(cnt%2==0){
        for(y=1;y<num;y++){
            for(x=num-1;x>=1;x--){
                if(y+x==cnt)
                    arr[y][x]=k++;
            }
        }
    }
    else{
        for(y=num-1;y>0;y--){
            for(x=1;x<num;x++){
                if(y+x==cnt)
                    arr[y][x]=k++;
            }
        }
    }cnt++;
    }







    for(y=0;y<num;y++){
        for(x=0;x<num;x++){
            printf("\t%d",arr[y][x]);
        }printf("\n");
    }

    return 0;
}
