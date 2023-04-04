#include <stdio.h>//대소문자 변환
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[50];
    int length,i;
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++){
        if(a[i]>=65 && a[i]<=90)
            a[i]=a[i]+32;

        else if(a[i]>=97 && a[i]<=122)
            a[i]=a[i]-32;
    }
    printf("%s",a);

    return 0;
}
