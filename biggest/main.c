#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int num,biggest=0,i,numbers;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&numbers);
        if(numbers>=biggest)
            biggest=numbers;
    }
    printf("%d",biggest);

    return 0;
}
