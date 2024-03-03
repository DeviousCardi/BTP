#include<stdio.h>
int main()
{int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a+b>c&&b+c>a&&a+c>b)
{if(a*a+b*b>c*c||b*b+c*c>a*a||c*c+a*a>b*b)
    printf("OBTUSE");
    else if(a*a+b*b==c*c||c*c+a*a==b*b||b*b+c*c==a*a)
    printf("RIGHT");
    else if(a*a+b*b<c*c||c*c+a*a<b*b||b*b+c*c<a*a)
    printf("ACUTE");}
    else printf("INVALID");
return 0;}