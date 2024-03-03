#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a;
	scanf("%d",&n);
	while(n>0){
	    int b=0;
	    a=(n%10);printf("%d\n",a);
	    n=n-a;printf("%d\n",n);
	    n=n/10;printf("%d\n",n);
	    b=b*10;printf("%d\n",b);
	    b=b+a; printf("%d\n",b); }
	if(b==n)
	printf("YES");
	else
	printf("NO");
	return 0; }