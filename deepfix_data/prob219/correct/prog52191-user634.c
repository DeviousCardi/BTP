#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int min=-1000;
    int max=1000;
    if(a>=max)
    max=a;
    if(b>=max)
    max=b;
    if(c>=max)
    max=c;
    if(a<=min)
    min=a;
    if(b<=min)
    min=b;
    if(c<=min)
    min=c;
    if(a>max && a<=min)
    printf("%d",a);
    if(b>max && b<=min)
    printf("%d",b);
    if(c>max && c<=min)
    printf("%d",c);
	return 0; }