#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m[10];
	scanf("%d",&n);
	m[0]=n%10;
	for(i=1;i<10;i++){
	    m[i]=((n/(10*i))%10; }
	for(i=0;i<10;i++) printf("%d",m[i]);
	return 0; }