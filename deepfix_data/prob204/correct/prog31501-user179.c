#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m[10];
	scanf("%d",&n);
	for(i=2;i<10;i++){
	    m[1]=n%10;
	    m[i]=((n-m[i-1])/10)%10;
	    if(m[i]==0) break; }
	printf("%d",m[10]);
	return 0; }