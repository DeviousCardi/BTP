#include <stdio.h>
#include <stdlib.h>
int main() {
int ti;
float a,b,c;
scanf("%d",&ti);
a = 0.1*(ti-200000);
b = (30000+.2*(ti-500000));
c = (130000+.3*(ti-1000000));
if(ti<=200000) printf("0");
else
    {if (ti<=500000) printf("%.2f",&a);
    else
        {if (ti<=1000000) printf("%.2f",&b);
        else printf("%.2f",&c); } }
	return 0; }