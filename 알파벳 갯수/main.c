
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100]={0};
    int count[26]={0},i,length,j;
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++){
        if(a[i]>=97 && a[i]<=122)
            a[i]=a[i]-32;
    } // 대문자로 바꾸기

    for(j=0;j<length;j++){
        for(i=0;i<26;i++){
            if(a[j]==65+i)
                count[i]++;
       }
    }
    for(j='A',i=0 ;j<='Z' ;i++, j++)
        printf("%c %d\n",j,count[i]);




    return 0;
}

