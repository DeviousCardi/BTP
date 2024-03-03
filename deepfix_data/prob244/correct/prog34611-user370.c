#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    scanf("%d",&ti);
    if (ti<=200000)
    {printf("0");}
    else if ((ti>200000) && (ti<=500000))
    {printf("%.2f",(ti-200000)/10.0);}
    else if ((ti>500000) && (ti<=1000000))
    {printf("%.2f",(ti-500000)/5.0+30000);}
    else if (ti>1000000)
    {printf("%.2f",130000+.3*(ti-1000000));}
	return 0; }