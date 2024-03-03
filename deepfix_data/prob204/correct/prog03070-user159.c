#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b;
	scanf("%d",&a);
	for(b=0;a!=0;a=a/10)
	b=b*10+a%10;
	printf("%d",b);
	if(a==b)
	printf("YES");else printf("NO");
	return 0; }