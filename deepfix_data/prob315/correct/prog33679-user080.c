#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,s[1000],c;
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&s[i]); }
	for(k=0;k<n;k=k+1) {
	    for(j=k+1;j<n;j=j+1)
	    {c=0;
	        if(s[k]>s[j]) {
	            c=c+1; } }
	     printf("%d",c);
	     sum=sum+c; }
	printf("%d",sum);
	return 0; }