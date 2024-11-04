#include<stdio.h>
int main()
{
    int cp,sp;
    float loss;
    scanf("%d%d",&cp,&sp);
    loss=((cp-sp)*100.0)/cp;
    printf("%.2f",loss);
}