#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m[20];
	scanf("%d",&n);
	m[0]=n%10;
	for(i=1;i<21;i++){
	    m[i]=((n-m[i-1])/10)%10;
	    if(m[i]==0) break; }
	printf("%d",m[20]);
	return 0; }