#include <stdio.h>//���ڷ�����
#include <stdlib.h>

int main()
{
    int time,a,b,c,resulta,resultb,resultc; //5��,1��,10��
    scanf("%d",&time);

    a=300;
    b=60;
    c=10;

    resulta=time/a;
    resultb=(time%a)/b;
    if((time%a%b)%c==0){
        resultc=(time%a%b)/c;
        printf("%d %d %d",resulta,resultb,resultc);}
    else
        printf("-1");

    return 0;
}
