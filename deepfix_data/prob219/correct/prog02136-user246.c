#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b) {
	    if(b>c)
	    printf("%d",b);
	else
	if(c>b) {
	       if(a>c)
	    printf("%d",c);
	else
	    if(c>a)
	printf("%d",a);
	else
	if(c==a)
	printf("%d",b); }
	else
	    if(b==c)
	printf("%d",b); }
	else
	if (b>a)
	{if(a>c)
	printf("%d",a);
	else
	if(c>a) {
	    if(b>c)
	    printf("%d",c);
	    else
	    if(c>b)
	    printf("%d",b); }
	else
	if(c==a)
	printf("%d",c); }
	else if(a==b)
	{if(a>c)
	printf("%d",c);
	else
	if(c>a)
	printf("%d",a); }
	return 0; }