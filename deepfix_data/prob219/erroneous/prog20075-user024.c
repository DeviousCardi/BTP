#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if((a==b)&&(a==c))
	printf("%d",a);
	else
	{if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(b!=a)))
	{if(a>c)
	printf("%d",c);
	else
	{if(c>b)
	printf("%d",b);
	else
	printf("%d",a);}
	else{
	if(a>=b) {
	    if(b>=c)
	    printf("%d",b);
	    else
	   {if(a>=c)
	   printf("%d",c);
	   else
	   printf("%d",a); } }
	else {
	    if(a>=c)
	    printf("%d",a);
	    else
	    {if(b>=c)
	    printf("%d",c);
	    else
	    printf("%d",b); } }
	return 0; }