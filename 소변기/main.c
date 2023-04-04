#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,min[100],max[100],i,cntMAX=0,k=1,cntMIN=0;
    scanf("%d",&num);

    //max의 경우
    for(i=0;i<num;i++){
        if(i%2==0 || i==0)
            max[i]=1;
        else
            max[i]=2;
    }
    for(i=0;i<num;i++){
        if(max[i]==1)
            cntMAX++;
    }





    //min의 경우
    for(i=0;i<num;i++){
        if(i==3*k-2){
            cntMIN++;
            k++;
        }
    }
    printf("%d %d",cntMAX,cntMIN);




    return 0;
}
