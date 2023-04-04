/*#include<stdio.h>
int main()
{
    int a=1;
    float b=1.235;
    char c='A';
    printf("%-5d%f\n",a,b);
    printf("%.2f %.5f %f\n",b,b,b);
    printf("%g\n",b);
    printf("%3c %d\n",c,c);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a, b;
    printf("input two numbers : ");
    scanf("%d,%d", &a,&b);
    printf("after swaping : %d,%d",b,a);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    float a;
    printf("input a decimal fraction?");
    scanf("%f",&a);
    printf("%.0f %.1f %.2f",a,a,a);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("아파트평수? ");
    scanf("%d",&a);
    b=a*3.305785;
    printf("실제 면적=%.2f제곱미터",b);
    return 0;

}
