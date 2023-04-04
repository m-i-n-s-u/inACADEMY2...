#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resultTW='F';
    int num,year,resultTEN=9,i;

    scanf("%d",&num);
    year=num-2013;

    for(i=0;i<year;i++){
            resultTEN++;
            resultTW++;

            if(resultTEN==10)
                resultTEN=0;

            if(resultTW=='M')
                resultTW='A';

    }
    printf("%c%d",resultTW,resultTEN);

    return 0;
}
