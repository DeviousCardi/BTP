#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,temp;
	scanf("%d%d%d%d",&a,&b,&c,&temp);
	if((a<b)&&(b<c)){
	temp=a;
	b=a;
	a=b;
	printf("%d",a);}
	else if((c<b)&&(b<a)){
	temp=a;
	b=a;
	a=b;
	printf("%d",a);}
	else if((a<c)&&(c<b)){
	temp=a;
	c=a;
	a=c;
	printf("%d",a);}
	else if((b<c)&&(c<a)){
	temp=a;
	c=a;
	a=c;}
	return 0; }