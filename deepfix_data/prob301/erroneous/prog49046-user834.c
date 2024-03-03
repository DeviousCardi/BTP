#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	printf("%d",&n);
	int a[n];
	int count=0;
	int i;
	int j;
	int max;
	for(i=0;i<n;i++) {
	    scanf("%d".&a[i]); }
	    int b[n];
	    for(i=0;i<n;i++){
	        for(j=i;j<n;j++){
	            if(a[i]==a[j])
	            count++; }
	    b[i]=count; }
	    max=b[0];
	        for(j=0;j<n;j++) {
	            if(max<b[j]) {
	                max=b[j];
	                l=j; } }
	   printf("%d",a[l]);
	return 0; }