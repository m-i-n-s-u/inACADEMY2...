#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int score[100]={0},scoreP=0,scoreB=0,i,time,cnt=0;
    scanf("%d",&time);
    for(i=0;i<time;i++){
        scanf("%d",&score[i]);
        cnt++;
    }
    for(i=0;i<cnt;i++){
        if(score[i]<0)
            scoreP=scoreP+score[i]*-1;
        else if(score[i]>0)
            scoreB=scoreB+score[i];
    }

    printf("%d %d",scoreP,scoreB);


    return 0;
}
