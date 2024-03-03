#include<stdio.h>
int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>=b+c)||(b>=a+c)||(c>=a+b))
    printf("INVALID");
    if((a*a+b*b=c*c)||(a*a+c*c=b*b)||(b*b+c*c=a*a))
    printf("ACUTE");
    if((a*a+b*b>c*c)&&(b*b+c*c>a*a)&&(a*a+c*c>b*b))
    printf("ACUTE");
    if((a*a+b*b<c*c)||(a*a+c*c<b*B)||(b*b+c*c<a*a))
    printf("OBTUSE")
    return 0; }