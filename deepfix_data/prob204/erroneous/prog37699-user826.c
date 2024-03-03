#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,reverse;
	scanf("%d".&n);
	for(reverse=0,n) {
	    reverse=reverse*10;
	    reverse=reverse+n%10;
	    n=n/10;
	    if(n==0)
	    {break;} }
	if(reverse==n)
	{printf("YES);}
	else{printf("NO");}
	return 0; }