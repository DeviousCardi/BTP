#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c)&(b+c>a)&(c+a>b)){
    if(((c*c)<(a*a)+(b*b))||((a*a)<(b*b)+(c*c))||((b*b)<((a*a)+(c*c)))
    printf("Acute Tringle");
    else
    {printf("not acute tringle");}}
   {printf("cannot form a tringle");}}
	return 0; }