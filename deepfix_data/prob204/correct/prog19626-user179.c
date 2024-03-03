#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m[20];
	scanf("%d",&n);
	m[0]=n%10;
	for(i=1;i<21;i++){
	    m[i]=(n/(10*i))%10;
	    if(m[i]==0) break; }
	for(i=0;i<21;i++) printf("%d",m[i]);
	return 0; }