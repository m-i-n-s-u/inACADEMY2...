#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char f[50]={0},arr[10][10]={0};
    int i,x=0,y=0,length,leng,cnt=1;

    gets(f);
    length=strlen(f);

    if(length%6==0)
        leng=length/6;
    else
        leng=length/6+1;



    //공백을 *로 바꾼다
    for(i=0;i<length;i++){
        if(f[i]==' ')
            f[i]='*';
    }

    //6자리씩 끊어낸다
    i=0;
    for(y=0;y<leng;y++){
        for(x=0;x<6;x++){
            arr[y][x]=f[i++];

        }}


    //마지막 공백들은 점으로 바꾼다
    for(y=leng-1,x=0;x<6;x++){
        if(arr[y][x]==0)
            arr[y][x]='.';
        }



    for(x=0;x<6;x++){
    for(y=0;y<leng;y++){
        printf("%c",arr[y][x]);
        }
    }



    return 0;
}
