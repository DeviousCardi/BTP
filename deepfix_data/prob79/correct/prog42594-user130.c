#include <stdio.h>
#include <stdlib.h>
int main() {int n;
	scanf("%d",&n);int* a;a=(int*)malloc(n*sizeof(int));
	int c1=0,c2=n-1;int t1=a[c1],t2=a[c2];
	while((c1+1)>c2-1) {
	    if(t1>t2)
	    {c2--;t2=t2+a[c2];
	}else if((t1==t2)&&((c1+1)!=(c2-1))) {
	    c2--;c1++;t1=t1+a[c1];t2=t2+a[c2];
	}else if((t1==t2)&&((c1+1)==(c2-1)))
	{c1++;t1=t1+a[c1]; }
	else {
	    c1++;t1=t1+a[c1];
	}}
	printf("%d %d",(c1+1),(n-c2));
	return 0; }