#include <stdio.h>//암호처리
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100],pw1[100],pw2[100];
    int i,length;
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++){
        pw1[i]=a[i]+2;
    }
    for(i=0;i<length;i++){
        pw2[i]=a[i]*7%80+48;
    }

    printf("%s\n",pw1);
    printf("%s\n",pw2);
    return 0;
}
