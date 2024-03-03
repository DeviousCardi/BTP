#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b&&a<c)||(a>c&&a<b)||(a==b&&a<c)||(a==c&&a<b)||(b==c&&a<b))
	printf("%d",a);
	else if((b>c&&b<a)||(b>a&&b<c)||(a==c&&a>b)||(b==c&&b<a))
	printf("%d",b);
	else if((c>a&&c<b)||(c>b&&c<a)||(a==b&&a>c)||(a==b==c))
	printf("%d",c);
	return 0; }