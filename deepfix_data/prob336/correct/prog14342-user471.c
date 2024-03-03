#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    int b;
    int c;
    a>0,b>0,c>0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>(b+c)||b>(a+c)||c>(a+b))
    printf("Cannot form a Tringle");
if((c*c)<((a*a)+(b*b))&&(a*a)<((b*b)+(c*c))&&(b*b)<((a*a)+(c*c)))
   printf("Acute Tringle");
    else
    printf("Not Acute Tringle");
	return 0; }