#include <stdio.h> //시저의 암호
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[50];
    int i,length;
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++){
            if(a[i]>=97 && a[i]<=122)
        a[i]=a[i]+3;
    }
    printf("%s",a);

    return 0;
}
