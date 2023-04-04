#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);


    int i,cnt=0,length;
    char input[100]={0};
    gets(input);
    length=strlen(input);
    for(i=0;i<length-5;i++){
        if(input[i]=='k' && input[i+1]=='h' && input[i+2]=='a' && input[i+3]=='z' && input[i+4]=='i' && input[i+5]=='x')
            cnt++;
    }
    printf("%d",cnt);

    return 0;
}
