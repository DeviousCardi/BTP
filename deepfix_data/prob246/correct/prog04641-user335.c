#include <stdio.h>
int main() {
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int product=x*y*z;
	int sum= x+y+z;
	float average= sum/3.0;
	printf("%d\n",sum);
	printf("%d\n",product);
	printf("%f",average);
	return 0; }