#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a*a+b*b)>(c*c))
    {printf("ACUTE");}
    else if((a*a+b*b)==(c*c))
    {printf("RIGHT");}
    else if((a*a)<(c*c+b*b))
    {printf("INVALID");}
    return 0; }