#include <stdio.h>//문자열정리
#include <stdlib.h>
#include <string.h>

int main()
{
    int num,i,j;
    char a[100][100]={0},imsi[100];

    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<num-1;i++){
            for(j=i+1;j<num;j++){
                if(strcmp(a[i],a[j])>0){
                    strcpy(imsi,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j],imsi);
                }
            }

    }
    for(i=0;i<num;i++){
        printf("%s\n",a[i]);
    }






    return 0;
}
