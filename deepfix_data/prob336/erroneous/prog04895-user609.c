#include <stdio.h>
#include <stdlib.h>
int main() {
	int m;
	int n;
	int o;
	scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&o);
    if (b+c<a||c+a<b||a+b<c)
    printf("not a triangle");
    else
    if(a*a+b*b>c*c||a*a+c*c>b*b||b*b+c*c>a*a)
    printf("acute triangle");
    else printf("not acute triangle");
    return 0; }