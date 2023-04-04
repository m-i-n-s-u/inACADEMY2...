#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{



    int num,i,j,length;
    char aph[100]="ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ",player[100];
    scanf("%d",&num);
    fflush(stdin);
    scanf("%s",player);
    length=strlen(player);
    for(i=0;i<length;i++){
            for(j=26;j<53;j++){
                if(player[i]==aph[j])
                    printf("%c",aph[j-num]);
            }

    }
    return 0;
}
