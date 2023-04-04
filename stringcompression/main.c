#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char a[100],result[100]={0},j=0;
    int i,length,k=0;
    gets(a);
    length=strlen(a);

    for(i=0;i<length;i++){

            if(a[i]==a[i+1]){
                result[j]++;
                result[j+1]=a[i];
            }

            else if(a[i]!=a[i+1]){
                result[j]++;
                result[j]=result[j]+'0'; //'4'-'0'=4, 4+'0'='4'
                result[j+1]=a[i];
                j=j+2;

            }

    }
    printf("%s",result);






    return 0;
}
