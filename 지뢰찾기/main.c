#include <stdio.h>
#include <stdlib.h>

int main()
{


    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);




    int i,j,amount[30][30]={0},n,cnt=0;
    char ground[30][30]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%c",&ground[i][j]);
        }fflush(stdin);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(ground[i-1][j]=='*')
                    cnt++;
                if(ground[i+1][j]=='*')
                    cnt++;
                if(ground[i][j-1]=='*')
                    cnt++;
                if(ground[i][j+1]=='*')
                    cnt++;
                if(ground[i-1][j-1]=='*')
                    cnt++;
                if(ground[i+1][j-1]=='*')
                    cnt++;
                if(ground[i-1][j+1]=='*')
                    cnt++;
                if(ground[i+1][j+1]=='*')
                    cnt++;
                if(ground[i][j]=='*')
                    cnt++;
                amount[i][j]=cnt;
                cnt=0;

        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",amount[i][j]);
        }printf("\n");
    }






    return 0;
}
