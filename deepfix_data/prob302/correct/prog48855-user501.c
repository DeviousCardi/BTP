#include <stdio.h>
int main()
{   float a,b,c,d,e,f;
    scanf("%f%f\n%f%f\n%f%f\n",&a,&b,&c,&d,&e,&f);
            if(((e-a)*(c-a))>0&&((f-d)*(b-d))>0&&((e-c)*(a-c))>0&&((f-b)*(d-b))>0)
            printf("Point is inside the rectangle");
            else if(((e-a)*(c-a))>=0&&((f-d)*(b-d))>=0&&((e-c)*(a-c))>=0&&((f-b)*(d-b))>=0)
            printf("Point is on the rectangle");
	        else
	        printf("Point is outside the rectangle");
	return 0; }