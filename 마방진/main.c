#include <stdio.h> //¸¶¹æÁø
#include <stdlib.h>

int main()
{
    int num,x,y,i,t=2;
    int arr[10][10];

    scanf("%d",&num);

    for(y=0;y<10;y++){
        for(x=0;x<10;x++){
            arr[y][x]=0;
            }
    }

    for(y=1;y<=num;y++){
        for(x=1;x<=num;x++){
            arr[y][x]=100;
        }
    }

    arr[1][num/2+1]=1;

    y=1;
    x=num/2+1;

    while(t<=num*num){

        if(arr[y-1][x+1]==100){
            y=y-1;
            x=x+1;
            arr[y][x]=t++;
        }

        else if(arr[y-1][x+1]==0 && y-1<1 && x+1>=1 && x+1<=num){
            y=y-1;
            x=x+1;

            y=num;
            arr[y][x]=t++;
        }
        else if(arr[y-1][x+1]==0 && y-1>=1 && y-1<=num && x+1>num){
            y=y-1;
            x=x+1;

            x=1;
            arr[y][x]=t++;
        }
        else if(arr[y-1][x+1]==0 && y-1<1 && x+1>num){
            y=y-1;
            x=x+1;

            y=y+2;
            x=x-1;
            arr[y][x]=t++;
        }

        else{
            y=y-1;
            x=x+1;

            y=y+2;
            x=x-1;
            arr[y][x]=t++;

        }

    }


    for(y=1;y<=num;y++){
        for(x=1;x<=num;x++){
            printf("%d ",arr[y][x]);
        }printf("\n");
    }

    return 0;
}
