#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[50],rev[50],result[50];
    int num,i,n[10],m[10],j=0,k=0,length;
    gets(a);
    length=strlen(a);

    scanf("%d",&num);

    for(i=0;i<num;i++)
        scanf("%d %d",&n[i],&m[i]);


    //첫번째 시행
    for(i=m[j];i>=n[j];i--)
        rev[k++]=a[i];

    k=0;
    for(i=0;i<n[j];i++)
        result[i]=a[i];

    for(i=n[j];i<=m[j];i++)
        result[i]=rev[k++];

    for(i=m[j]+1;i<length;i++)
        result[i]=a[i];
    k=0;

    //둘째부터 시행
    for(j=1;j<num;j++){
    for(i=m[j];i>=n[j];i--)
        rev[k++]=a[i];

    k=0;
    for(i=0;i<n[j];i++)
        result[i]=result[i];

    for(i=n[j];i<=m[j];i++)
        result[i]=rev[k++];

    for(i=m[j]+1;i<length;i++)
        result[i]=result[i];
    k=0;

    }



    printf("%s",result);
    return 0;
}
