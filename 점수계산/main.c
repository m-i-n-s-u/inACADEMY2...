#include <stdio.h>//점수계산
#include <stdlib.h>

int main()
{
    int num,score=0,cnt=1,i,answer[11],j;
    scanf("%d",&num);
    for(i=0;i<num;i++)
        scanf("%d",&answer[i]);

    for(i=0;i<num;i++){
        if(answer[i]==1){
            score=score+cnt;
            cnt++;
        }
        else
            cnt=1;

    }
    printf("%d",score);


    return 0;
}
