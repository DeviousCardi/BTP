#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int s=a+b+c ;
    int p=a*b*c ;
    float av=(a+b+c)/3 ;
    printf("%d %d %f \n",s,p,av);
	return 0; }