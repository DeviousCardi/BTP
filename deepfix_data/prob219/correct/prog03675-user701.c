#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a<c||a<b&&a>c)
	printf("%d",a);
	if(b>a&&b<c||b>a&&b>c)
	printf("%d",b);
	if(c>b&&c<a||c<b&&c>a)
	printf("%d",c);
	if(a==b&&a<c)
	printf("%d",a);
	if(a==c&&a<b)
	printf("%d",a);
	if(c==b&&c<a)
	printf("%d",c);
    if(a==b&&a>c)
	printf("%d",c);
	if(a==c&&a>b)
	printf("%d",b);
	if(c==b&&c>a)
	printf("%d",a);
	return 0; }