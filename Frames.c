#include<stdio.h>
int main()
{
    int x,y,z,frame;
    scanf("%d%d%d%d",&x,&y,&z);
    frame=2*(x*z+y*z);
    printf("%d",frame);
}