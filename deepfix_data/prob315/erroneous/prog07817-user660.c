#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[1000],inv[1000],count=0,b[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
	        scanf("%d",&a[i]);
	        inv[i]=0; }
	for(int i=0;i<10000;i++) {
	        b[i]=0; }
	for(int i=0;i<n;i++) {
	        for(int j=i+1;j<n;j++) {
	                if(a[i]>a[j]) {
	                        int t=a[i];
	                        a[i]=a[j];
	                        a[j]=t;
	                        a[i]++;
	                        count++; } } }
	 printf("%d\n",count);
	 for(int i=0;i<;i++)
	    printf("%d",a[i]);
	return 0; }