#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d,%d,%d",a,b,c);
    if ((a+b<c)||(b+c<a)||(a+c<b))
    {printf("INVALID");}
    else { if ((a*a+b*b<c*c)||(a*a+b*b<c*c)||(a*a+b*b<c*c))
    {printf("OBTUSE");}
    else if ((a*a+b*b==c*c)||(a*a+b*b==c*c)||(a*a+b*b==c*c))
    {printf("RIGHT");}
    else if ((a*a+b*b>c*c)&&(a*a+b*b>c*c)&&(a*a+b*b>c*c))
    {printf("ACUTE");}}
    return 0; }