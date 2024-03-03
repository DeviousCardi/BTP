#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int t,num=0;
	for(i=0;n!=0;i++) {
	    t=n%10;
	    n=n/10;
	    num=num*10+t; }
	if(num==n)
	printf("YES");
	else
	printf("NO");
	printf("%d",num);
	return 0; }