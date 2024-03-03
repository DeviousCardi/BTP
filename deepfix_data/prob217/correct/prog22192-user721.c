#include <stdio.h>
#include <stdlib.h>
int main() {
	    int n,s,i,j,sum;
	    int a[1000];
	    scanf("%d",&n);
	    for (i=0;i<n;i++){
	        scanf("%d",&a[i]); }
	    scanf("%d",&s);
	    for (i=0;i<n;i++){
	        for (j=n-1;j<0;j--){
	            sum = a[i]+a[j];
	            if (sum==s){
	                printf("(%d,%d)\n", a[i],a[j]); } } }
	return 0; }