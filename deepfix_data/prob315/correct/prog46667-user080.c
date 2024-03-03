#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,s[1000],c;
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&s[i]); }
	for(k=0;k<n;k=k+1) {
	    for(j=1;j<n;j=j+1) {
	        if(s[k]>s[j])
	        {c=0;
	            c=c+1; } }
	     printf("%d\n",c);
	     sum=sum+c; }
	printf("%d",sum);
	return 0; }