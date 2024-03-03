#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int n;
	scanf("%d",&n);
	while(n%10!=0) {
	    n=n%10;
	for(i=0;i<n;i++) {
	    if(a[i]!=a[n-i-1]) {
	        printf("No");
	        break; }
      	else
      	{   printf("Yes");
      	    continue; } }
	return 0; }