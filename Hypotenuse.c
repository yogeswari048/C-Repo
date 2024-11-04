#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float hyp;
    scanf("%d%d",&a,&b);
    hyp=sqrt(a*a+b*b);
    printf("%.2f",hyp);
}