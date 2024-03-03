#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000],n,i,count=0;
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    scanf ("%d",&a[i]); }
	if (n==1){
	    printf ("%d",a[0]); }
	else if (n>1){
	 for (i=n-2;i>0;i--){
	       if (a[i]==a[i-1]){
	           count=count+1;
	           break; } }
	 printf ("%d",count); }
	for (i=1;i<n-2;i++){
	       if (a[i]==a[i-1]){
	           count=count+1;
	           break; } }
	 printf ("%d",count);
	   return 0; }