#include <stdio.h>
#include <stdlib.h>
int main() {
	int j,i,n,mode;
	 scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	   scanf("%d",&a[i]);
	 for(j=0;j<n;j++) {
	 if (a[i]=a[j])
	 mode=a[i];
	printf("%d",mode);break; } }
	return 0; }