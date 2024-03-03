#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a<=200000)
    {printf("0");}
    if(a<=500000,a>200000)
    {printf("%.2f",0.1*(a-200000));}
    if(a>500000,a<=1000000)
    {printf("%.2f",30000+0.2*(a-500000));}
    if(a>1000000)
    {printf("%.2f",130000+0.3*(a-1000000));}
	return 0; }