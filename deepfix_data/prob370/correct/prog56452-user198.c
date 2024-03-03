#include<stdio.h>
int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>=b+c)||(b>=a+c)||(c>=a+b))
    printf("INVALID");
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
    printf("RIGHT");
if((a*a+b*b>c*c)&&(b*b+c*c>a*a)&&(a*a+c*c>b*b))
    printf("ACUTE");
    return 0; }