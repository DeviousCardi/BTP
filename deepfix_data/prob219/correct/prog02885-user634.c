#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c) {
        if (b>=c)
        printf("%d",b);
        else if (c>=b)
        printf("%d",c); }
	else if(b>=a && b>=c) {
        if (a>=c)
        printf("%d",a);
        else if (c>=a)
        printf("%d",a); }
	return 0; }