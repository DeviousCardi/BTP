#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	int a[10000];
	for(i=0;i<100000;i++)
	scanf("%d",a[i]);
	n=i;
	for(i=0;i<=n;i++){
	    if(a[i]==a[n-i])
	        j=1;
	    else
	        j=0; }
	if(j==1)
	    printf("Yes");
	else if(j==0)
	    printf("No");
	return 0; }