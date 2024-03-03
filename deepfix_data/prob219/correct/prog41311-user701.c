#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a>b&&a<c)||(a<b&&a>c))
	printf("%d",a);
    else	if((b>a&&b<c)||(b<a&&b>c))
	printf("%d",b);
    else	if((c>b&&c<a)||(c<b&&c>a))
	printf("%d",c);
    else	if(a==b&&a<c)
	printf("%d",a);
    else	if(a==c&&a<b)
	printf("%d",a);
    else	if(c==b&&c<a)
	printf("%d",c);
    else    if(a==b&&a>c)
	printf("%d",c);
    else	if(a==c&&a>b)
	printf("%d",b);
    else	if(c==b&&c>a)
	printf("%d",a);
	return 0; }