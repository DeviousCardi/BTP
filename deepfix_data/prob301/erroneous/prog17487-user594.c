#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i=0,a[10000],count,b,c;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	max_count=0;
	for(i=1;i<n;i++){
	    count=0;
	    scanf("%d",&a[i]);
	        if(a[i]==a[i-1]){
	            count=count+1; }
	       if(count>=max_count){
	            max_count=count;
	            c=a[i]; } }
	return 0; }