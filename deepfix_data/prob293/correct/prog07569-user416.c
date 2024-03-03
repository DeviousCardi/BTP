#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,s,k,m;
	scanf("%d%d%d",&a,&b,&c);
		scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;
	if(a>b)
	k=a;
	else
	k=b;
	if(k>c)
	m=k;
	else
	m=c;
	printf("Cannot form a Triangle");
	if ((a*a+b*b)<(c*c))
	printf ("Obtuse Triangle");
	else
	printf("Not Obtuse Triangle");
	return 0; }