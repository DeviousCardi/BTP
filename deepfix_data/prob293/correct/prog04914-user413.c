#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a+b>c)&&(b+c>a)&&(c+a>b)) {
	    if((a>b)&&(a>c)&&(b*b+c*c<a*a))
	    {printf("Obtuse Triangle");}
	    else
	    {printf("Not Obtuse Triangle");}
	    if ((b>c)&&(b>a)&&(a*a+c*c<b*b))
	    {printf("Obtuse Triangle");}
	        else {printf("Not Obtuse Triangle");}
	         if ((c>b)&&(c>a)&&(a*a+b*b<c*c))
	        {printf("Obtuse Triangle");}
	    else {printf("Not Obtuse Triangle");} }
	else
	{printf("Cannot form a Triangle");}
	return 0; }