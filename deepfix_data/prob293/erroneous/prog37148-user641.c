#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
if ((a+b)>c)
    {if ((a+c)>b)
        {if ((b+c)>a)
            {if((a*a>(b*b+c*c))
                printf("obtuse");
                else
                {if(b*b>(a*a+c*c))
                printf("obtuse");
                else
                    {if (c*c>(a*a+b*b))
                    printf("obtuse");
                    else printf("not obtuse"); } } }
        else printf("cannot form a triangle"); }
    else printf("cannot form a triangle"); }
else printf("cannot form a triangle");
	return 0; }