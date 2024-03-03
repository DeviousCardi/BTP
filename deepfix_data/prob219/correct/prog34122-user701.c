#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a<b&&a>=c)||(a<c&&a>=b))
	printf("%d",a);
	if((b<a&&b>=c)||(b<c&&b>=a))
	printf("%d",b);
	if((c<b&&c>=a)||(c<a&&c>=b))
	printf("%d",c);
	if(a==b&&a==c)
	printf("%d",a);
	return 0; }