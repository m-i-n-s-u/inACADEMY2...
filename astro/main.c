#include <stdio.h>
#include <stdlib.h>

int main()
{freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int i,j,k,number;
    scanf("%d",&number);

    for(i=0;i<number;i++){
        for(j=i;j<number;j++){
            printf(" ");}
        for(k=0;k<=i;k++){
            printf("* ");
        }printf("\n");

        }
    for(i=0;i<=number;i++)
        printf("* ");
        printf("\n");

    for(i=0;i<number;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=i;k<number;k++){
            printf("* ");
        }printf("\n");
    }

   return 0;
}
