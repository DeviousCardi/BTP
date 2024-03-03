#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z;
	scanf("%d",&x);
	z=x/10;
	z=(z%10)*10;
	y=(x%10)*10+x/10+z;
	if(y==x)
	printf("YES");
	else
	printf("NO");
	return 0; }