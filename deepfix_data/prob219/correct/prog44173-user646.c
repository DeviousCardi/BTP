#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b&&a<c)||(a>c&&a<b)||(a==b&&a<c)||(a==c&&a<b))
	printf("%d",a);
	else if((b>c&&b<a)||(b>a&&b<c)||(b==c&&b<a)||(b==a&&b<c))
	printf("%d",b);
	else if((c>a&&c<b)||(c>b&&c<a)||(c==a&&c<b)||(c==b&&c<a))
	printf("%d",c);
	return 0; }