
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10]={0},sum=0,x,y,n,start=0,end,time,cnt=0,k;
    scanf("%d",&n);
    end=n;

    if(n%2==0)
        time=n/2;
    else
        time=n/2+1;

    for(y=0;y<n;y++){
        for(x=0;x<n;x++){
            scanf("%d",&a[y][x]);
        }
    }//배열완성

    //짝수일때
    while(cnt<time){

    for(k=0;k<=cnt;k++){

    if(start!=end-1){
    for(y=start;y<end;y++){
        sum=sum+a[y][start];
    }
    for(y=start;y<end;y++){
        sum=sum+a[y][end-1];
    }
    for(x=start+1;x<end-1;x++){
        sum=sum+a[start][x];
    }
    for(x=start+1;x<end-1;x++){
        sum=sum+a[end-1][x];}
    }

    else
    for(y=start;y<end;y++){
        sum=sum+a[y][start];
    }

    }
    start++;
    end--;
    cnt++;
}

printf("%d",sum);

    return 0;
}

