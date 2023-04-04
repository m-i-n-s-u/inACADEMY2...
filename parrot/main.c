#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int i,num;
   int speak[100]={0};

    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d",&speak[i]);
    }

    for(i=0;i<num;i++)
        printf("%d",speak[i]);



    return 0;
}
