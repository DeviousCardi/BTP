#include<stdio.h>
int main()
{int a,b,c;
    scanf("%d%d%d",a,b,c);
    if((a>b+c)||(b>a+c)||(c>a+b));
    printf("INVALID");
    else if((a*a=b*b+c*c)||(b*b=c*c+a*a)||(c*c=b*b+a*a));
    printf("RIGHT");
    else if((a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(b*b+c*c>a*a));
    printf("ACUTE");
    else if((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c>a*a+b*b));
    printf("OBTUSE")
    return 0; }