#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[1000];
	scanf("%d",&n);
	int i=0,j,count=0,ch=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++)
	    {ch=0;
	        if(a[i]>a[j]) {
	            count++;
	            ch++; } }
	    printf("%d",ch); }
return 0; }