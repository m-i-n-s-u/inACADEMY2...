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



    //������ *�� �ٲ۴�
    for(i=0;i<length;i++){
        if(f[i]==' ')
            f[i]='*';
    }

    //6�ڸ��� �����
    i=0;
    for(y=0;y<leng;y++){
        for(x=0;x<6;x++){
            arr[y][x]=f[i++];

        }}


    //������ ������� ������ �ٲ۴�
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
