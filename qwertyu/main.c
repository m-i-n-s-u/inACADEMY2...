#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    char insert[100]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./",conclude[100],a[100]={0};
    int i,j,length;
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++){
            for(j=0;j<47;j++){
                if(a[i]==insert[j])
                    conclude[i]=insert[j-1];
                else if(a[i]==' ')
                    conclude[i]=' ';
            }
    }
    for(i=0;i<length;i++)
        printf("%c",conclude[i]);



    return 0;
}
