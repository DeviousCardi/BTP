#include<stdio.h>
int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a+b>c)&&(b+c>a)&&(a+c>b)) {
{if((a>=b)&&(a>=c))
{if(b*b+c*c>a*a)printf("ACUTE");
 else if(b*b+c*c<a*a)printf("OBTUSE");
 else printf("RIGHT"); } }
{if((b>=c)&&(b>=a))
{if(a*a+c*c>b*b)printf("ACUTE");
else if(a*a+c*c<b*b)printf("OBTUSE");
else printf("RIGHT"); } }
{if((c>=a)&&(c>=b))
{if(a*a+b*b>c*c)printf("ACUTE");
else if(a*a+b*b<c*c)printf("OBTUSE");
else printf("RIGHT"); } } }
else{printf("INVALID");}
    return 0; }