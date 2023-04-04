#include <stdio.h> //인공지능 시계
#include <stdlib.h>

int main()
{
    int h,m,s,time,result,resulth,resultm,results;
    scanf("%d %d %d",&h,&m,&s);
    scanf("%d",&time);

    h=h*3600;
    m=m*60;

    result=h+m+s+time;

    resulth=result/3600;
    resultm=(result-resulth*3600)/60;
    results=result-resulth*3600-resultm*60;

    if(resulth>=24)
        resulth=resulth-resulth/24*24;

    printf("%d %d %d",resulth,resultm,results);

    return 0;
}
