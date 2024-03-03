#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a,b;
	scanf("%d",&n);
	i=1;
	a=0,b=0;
    if(i<=n) {
    a=a%10;
    b=a;
    i++; }
    printf("%d",b);
	return 0; }