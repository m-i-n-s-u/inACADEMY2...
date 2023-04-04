#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100]={0},b[100]={0};
    int result[100],i,length1,length2,sum,j=0;

    gets(a);
    gets(b);

    strrev(a);
    strrev(b);

    length1=strlen(a);
    length2=strlen(b);

    for(i=0;i<length2;i++){
        if(a[i]-b[i]<0){
            result[i]=10+a[i]-b[i];
            a[i+1]--;

        }
        else
            result[i]=a[i]-b[i];

        a[i]=result[i];
    }

    if(a[length1-1]!='0'){
        for(i=length1-1;i>=length2;i--)
            printf("%c",a[i]);
    }


    else if(a[length1-1]=='0'){
        for(i=length1-2;i>=length2;i--)
            printf("%c",a[i]);

    }

    for(i=length2-1;i>=0;i--)
        printf("%d",a[i]);
;
    return 0;
}
