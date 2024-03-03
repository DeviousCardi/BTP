#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,s,i,j,k,l;int a[n];
	scanf("%d",&n);
	for(i=0;i<n-1;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d\n",&a[n-1]);
	scanf("%d",&s);
	for(i=0;i<n-1;i++) {
	    j=n-1;
	     while(j=n-1) {
	        k=a[i];l=a[j];
	        if(k+l==s)
              {printf("(%d,%d)",k,l);
                 printf("\n");}
                 j=j+1;} } }
	return 0; }