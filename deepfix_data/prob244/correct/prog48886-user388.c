#include <stdio.h>
#include <stdlib.h>
int main() {
int a;
float b;
scanf("%d",&a);
if(a<=200000)
{printf("%.2f",b=0);}
if((a>=200001)&&(a<=500000))
{printf("%.2f",b=(10/100.0)*(a-200000));}
if((a>=500001)&&(a<=1000000))
{printf("%.2f",b=30000+(20/100.0)*(a-500000));}
if((a>1000000))
{printf("%.2f",b=130000+(30/100.0)*(a-1000000));}
return 0; }