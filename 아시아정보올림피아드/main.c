#include <stdio.h>//아시아정보올림피아드
#include <stdlib.h>

int main()
{
    int country[100],student[100],score[100],i,j,number,realscore[100],imsi,gold,silver,k,cop;

    scanf("%d",&number);

    for(i=0;i<number;i++)
        scanf("%d %d %d",&country[i],&student[i],&score[i]);

    for(i=0;i<number;i++)
        realscore[i]=score[i];

    for(i=0;i<number-1;i++){
        for(j=i+1;j<number;j++){
            if(realscore[i]>realscore[j]){
                imsi=realscore[i];
                realscore[i]=realscore[j];
                realscore[j]=imsi;
            }
        }
    }
    gold=realscore[number-1];
    silver=realscore[number-2];
    cop=realscore[number-3];


    for(i=0;i<number;i++){
        if(score[i]==gold){
            printf("%d %d\n",country[i],student[i]);
            gold=k;
            break;}}

    for(i=0;i<number;i++){
        if(score[i]==silver){
            printf("%d %d\n",country[i],student[i]);
            silver=k;
            break;}}

    if(country[gold]==country[silver]){
        for(i=number-3;i>=0;i--){
                cop=realscore[i];

            for(j=0;j<number;j++){
                if(score[j]==realscore[i]){
                    cop=j;
                    break;
                }
            }
            if(country[cop]!=country[gold]){
                printf("%d %d",country[j],student[j]);
                break;
            }

        }
    }







    return 0;
}
