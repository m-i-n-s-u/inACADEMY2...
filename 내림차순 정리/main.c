#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,imsi,length;
    char a[50];
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++)
        a[i]=a[i]-'0';
    for(i=0;i<length-1;i++){
        for(j=i+1;j<length;j++){
            if(a[i]>a[j]){
                imsi=a[i];
                a[i]=a[j];
                a[j]=imsi;
            }
        }
    }
    for(i=0;i<length;i++)
        printf("%d",a[i]);
    return 0;
}
