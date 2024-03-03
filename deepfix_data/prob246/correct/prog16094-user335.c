#include <stdio.h>
int main() {
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int product=x*y*z;
	int sum= x+y+z;
	float average= (x+y+z)/3;
	printf("%d\n",sum);
	printf("%d\n",product);
	printf("%f",average);
	return 0; }