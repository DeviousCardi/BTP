#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,d,rev=0;
	scanf("%d",&n);
	int temp=n;
	while(temp>0) {
	    d=temp%10;
	    rev=rev*10+d;
	    temp=temp/10; }
	if(rev==n) printf("YES");
	else printf("NO");
    return 0; }