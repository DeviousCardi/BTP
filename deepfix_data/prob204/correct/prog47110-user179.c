#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m[10];
	scanf("%d",&n);
	for(i=1;i<10;i++){
	    m[1]=n%10;
	    m[i+1]=((n-m[i])/10)%10; }
	for(i=1;i<21;i++){
	    printf("%d",m[i]); }
	return 0; }