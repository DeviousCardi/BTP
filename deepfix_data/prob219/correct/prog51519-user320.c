#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c)
	{ printf("%d",a); }
	else if (a==b) {
	if (a>c)
	printf("%d",c);
	else printf("%d",a); }
	else	if (a==c) {
	if (a>b)
	printf("%d",b);
	else printf("%d",a); }
	else	if (c==b) {
	if (a>c)
	printf("%d",c);
	else printf("%d",a); }
else if(a>b) {
	    if (b>c)
	    printf("%d",b);
	   else if(a>c)
	   printf("%d",c);
	   else printf("%d",c); }
else if (b>c) {
	    if (a>c)
	     printf("%d",a);
	     else printf("%d",c); }
	else printf("%d",b);
	return 0; }