#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char plate[50];
    int i,length,sum=0;

    gets(plate);
    length=strlen(plate);

    for(i=1;i<length;i++){
        if(plate[i-1]==plate[i])
            sum=sum+5;
        else
            sum=sum+10;
    }
    printf("%d",sum+10);
    return 0;
}
