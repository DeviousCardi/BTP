#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int a[20];
	for(i=0;i<n;i++) {
     scanf("%d\n",&a[i]);
	   if(a[i]>a[i-1]&&a[i]>a[i+1])
	      printf("Yes");
	   else
	      printf("No"); }
	i=i+1;
	return 0; }