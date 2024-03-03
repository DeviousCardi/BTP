#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if (a>=b) {
        printf("min=%d",b);}
    else
    { if (a>=c)
    printf("min=%d",c); } {
    if (c>=b)
    printf("min=%d",b);
    else
    printf("%d",b); }
return 0; }