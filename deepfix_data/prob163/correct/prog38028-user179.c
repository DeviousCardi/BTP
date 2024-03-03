#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,a[500],b[500];
	int s;
	scanf("%d\n%d\n",&n,&m);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%d",&b[i]); }
	s=a[500]+b[500];
	printf("%d",s);
	return 0; }