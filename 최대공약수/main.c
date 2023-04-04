#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,c,num1,num2;
    scanf("%d %d",&num1,&num2);

    if(num1>num2){
        m=num1;
        n=num2;
    }
    else
    {
        n=num1;
        m=num2;
    }

    c=m%n;
    while(1){
        c=m%n;
        m=n;
        if(c==0)
            break;
        n=c;

    }
    printf("%d",n);

    return 0;
}
