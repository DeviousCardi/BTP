#include <stdio.h>
#include <stdlib.h>
int main(){int a ;
int b;
int c;
scanf("%d,%d,%d",&a,&b,&c);
if(a+b>c&&b+c>a&&c+a>b) {
if(a*a+b*b>c*c&&a*a+c*c>b*b&&b*b+c*c>a*a)
printf("Acute Triangle");
else printf("Not Acute Triangle"); }
else printf("Cannot a Acute Triangle");
return 0; }