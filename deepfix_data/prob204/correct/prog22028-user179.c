#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m[20];
	scanf("%d",&n);
	m[1]=n%10;
	for(i=1;i<21;i++){
	    m[i+1]=((n-m[i])/10)%10; }
	for(i=1;i<21;i++){
	    printf("%d",m[i]); }
	return 0; }