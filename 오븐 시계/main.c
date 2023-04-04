#include <stdio.h>//¿Àºì½Ã°è
#include <stdlib.h>

int main()
{
    int h,m,time,result,resulth,resultm;
    scanf("%d %d %d",&h,&m,&time);
    h=h*60;
    result= h+m+time;
    resulth=result/60;
    resultm=result-60*resulth;

    if(resulth>=24)
       resulth=resulth-24;

    printf("%d %d",resulth,resultm);


    return 0;
}
