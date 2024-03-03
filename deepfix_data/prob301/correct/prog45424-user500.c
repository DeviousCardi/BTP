#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,index;
	scanf("%d",&n);
	int a[n];
	if(n==1){
	   printf("%d",n); }
	for(i=0;i<=n;i++){
	    scanf("%d",&a[i]); }
	 if(a[i]==a[i+1]){
	       printf("%d",a[i]); }
     else{ }
	return 0; }