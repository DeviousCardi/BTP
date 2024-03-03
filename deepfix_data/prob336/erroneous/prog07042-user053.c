#include <stdio.h>
#include <stdlib.h>
int main(){int a ;
int b;
int c;
scanf("%d,%d,%d",&a,&b,&c);
if((a*a+b*b>c*c || b*b+c*c>a*a||a*a+c*c>b*b))
{printf("Acute Triangle"); }
else if{ printf("Not Acute Triangle"); }
else{
    printf("Cannot form a Triangle"); }
return 0; }