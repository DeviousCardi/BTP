#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000],n,b,c,i,j,mode,count=0,max=1;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<=n-1;i++) {
	    if(a[i+1]==a[i]) {
	        count=count+1;
	        if(count>=max) {
	            max=count;mode=a[i]; } }
	   else {
	       count=0; } }
	printf("%d",mode);
	return 0; }