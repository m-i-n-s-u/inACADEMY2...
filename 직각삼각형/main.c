#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num,i,j;
    scanf("%d",&num);

    if(num%2!=0){
        for(i=0;i<num;i++){
            for(j=i;j>=0;j--){
                printf("@");
            }printf("\n");
        }}
    else
        printf("ERROR");

    return 0;
}
