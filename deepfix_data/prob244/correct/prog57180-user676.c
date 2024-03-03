#include <stdio.h>
#include <stdlib.h>
int main() {
	int ti;
	float a,b,c,d;
	scanf("%d",&ti);
	if (200000>=ti)
	    {printf("%.2f",a=0);}
	else {
	    if ((200001<=ti)&&(500000>=ti))
	       {printf("%.2f",b=0.1*(ti-200000));}
	    else {
	        if((500001<=ti)&&(ti<=1000000))
	        {printf("%.2f",c=30000+0.2*(ti-500000));}
	        else
	        if (ti>10000000)
	            {printf("%.2f",d=130000+0.3*(ti-10000000));} } }
	return 0; }