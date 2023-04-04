#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int first,second;
    scanf("%d %d",&first, &second);
    if(first>second)
        printf("YES");
    else
        printf("NO");

    return 0;
}
