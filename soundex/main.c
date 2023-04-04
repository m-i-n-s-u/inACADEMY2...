#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void list1()
{
    printf("1");
}
void list2()
{
    printf("2");
}
void list3()
{
    printf("3");
}
void list4()
{
    printf("4");
}
void list5()
{
    printf("5");
}
void list6()
{
    printf("6");
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char a[100]={0};
    int i,length,cnt=0;
    gets(a);
    length=strlen(a);
    for(i=0;i<length;i++){
        if(a[i]=='B' || a[i]=='F' || a[i]=='P' || a[i]=='V'){
            if(cnt!=1){
                list1();
                cnt=1;
        }}
        else if(a[i]=='C' || a[i]=='G' ||a[i]== 'J' || a[i]=='K' || a[i]=='Q' || a[i]=='S' || a[i]=='X' || a[i]=='Z'){
            if(cnt!=2){
                list2();
                cnt=2;
        }}
        else if(a[i]=='D' || a[i]=='T'){
            if(cnt!=3){
                list3();
                cnt=3;
            }}
        else if(a[i]=='L'){
            if(cnt!=4){
                list4();
                cnt=4;
            }}
        else if(a[i]=='M'||a[i]=='N'){
            if(cnt!=5){
            list5();
            cnt=5;
            }}
        else if(a[i]=='R'){
                if(cnt!=6){
                list6();
                cnt=6;
                }}
        else
            cnt=0;
    }
    return 0;
}
