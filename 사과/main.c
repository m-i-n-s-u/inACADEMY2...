#include <stdio.h> //»ç°ú
#include <stdlib.h>

int main()
{
    int num,apple[100]={0},student[100]={0},remain[100]={0},i,sum=0;

    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d %d",&student[i],&apple[i]);
    }

    for(i=0;i<num;i++){
        if(apple[i]-student[i]>0)
        while(apple[i]-student[i]>=0){
            remain[i]=apple[i]-student[i];
            apple[i]=remain[i];
    }

    else
    remain[i]=apple[i];

    }

    for(i=0;i<num;i++){
            sum=sum+remain[i];
    }
    printf("%d",sum);

    return 0;
}
