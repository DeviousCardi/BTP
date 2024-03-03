#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000],n,i,count=0;
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    scanf ("%d",&a[i]); }
	   for (i=n-2;i>0;i--){
	       if (a[i]==a[i-1]){
	           count=count+1; }
	       printf ("%d",count); }
	   return 0; }