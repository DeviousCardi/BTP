#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[1000],inv[1000],count=0,i,j;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
	        scanf("%d",&a[i]);
	        inv[i]=0; }
	for(i=0;i<n;i++) {
	        for(j=i+1;j<n;j++) {
	                if(a[i]>a[j]) {
	                        int t=a[i];
	                        a[i]=a[j];
	                        a[j]=t;
	                        a[i]++;
	                        count++; } } }
	 printf("%d\n",count);
	return 0; }