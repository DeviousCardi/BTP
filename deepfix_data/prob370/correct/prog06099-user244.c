#include<stdio.h>
int main()
{int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if((c>=b&&c>=a&&c>(a+b))||(b>=a&&b>=c&&b>(a+c))||(a>=b&&a>=c&&a>(c+b)))
printf("INVALID");
else if((c>=b&&c>=a&&c*c>(a*a+b*b))||(b>=a&&b>=c&&b*b>(a*a+c*c))||(a>=b&&a>=c&&a*a>(c*c+b*b)))
printf("OBTUSE");
else if((c>=b&&c>=a&&c*c<(a*a+b*b))||(b>=a&&b>=c&&b*b<(a*a+c*c))||(a>=b&&a>=c&&a*a<(c*c+b*b)))
printf("ACUTE");
else
printf("RIGHT");
    return 0; }