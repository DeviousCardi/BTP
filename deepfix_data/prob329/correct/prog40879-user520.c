#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c, max, min, mid;
	scanf("%d",&a);
	scanf("%d", &b);
	scanf("%d", &c);
	if(a>b&&a>c)
	max=a;
	else if (b>c&&b>a)
	max=b;
	else max=c;
	if (a<b&&a<c)
	min=a;
	else if(b<a&&b<c)
	min=b;
	else min=c;
	if((a<b&&b<c)||(c<b&&b<a))
	mid=b;
	else if((a<c&&c<b)||(b<c&&c<a))
	mid = c;
	else mid=a;
	if ((min*min+mid*mid==max*max)&&(min+mid>max))
	printf("Right Triangle");
	else if(min+mid>max&&min*min+mid*mid!=max*max)
	printf("Not Right Triangle");
	else printf("Cannot form a Triangle");
	return 0; }