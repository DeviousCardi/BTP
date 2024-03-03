#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	    scanf("%d",(a+i));
	int c[n];
	int total=0;
	for(int i=0;i<n;i++)
	    c[i]=0;
	for(int i=0;i<n-1;i++){
	    for(int j=i+1;j<n;j++){
	        if(a[j]<a[i])
	            c[i]++; }
	    total+=c[i]; }
	printf("%d\n",total);
	for(int i=0;i<n;i++){
	    printf("%d ",c[i]); }
	return 0; }