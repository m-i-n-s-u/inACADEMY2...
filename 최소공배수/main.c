#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int num,numbers[100]={0},n,m,c,i,result[100],cnt=0;
    int j=0;
    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d",&numbers[i]);
    }

    n=numbers[0];
    m=numbers[1];
    c=n%m;

    while(c!=0){
        n=m;
        m=c;
        c=n%m;
    }
    result[0]=numbers[0]*numbers[1]/m; // 첫번째 최소공배수

    for(i=2;i<num;i++){
            n=numbers[i];
            m=result[j];
            c=n%m;
            while(c!=0){
                n=m;
                m=c;
                c=n%m;
            }
            result[j+1]=numbers[i]*result[j]/m;
            j++;
            cnt++;


    }

    printf("%d",result[cnt]);



    return 0;
}
