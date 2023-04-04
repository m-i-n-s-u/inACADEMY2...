#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int r,nums,i;
    float pizza, amount;

    scanf("%d %d",&r,&nums);
    pizza=3.14*r*r;
    amount=pizza*1/nums;
    printf("%.2f",amount);



    return 0;
}
