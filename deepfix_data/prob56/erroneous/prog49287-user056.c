#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    if (n!=1)
    return n*fact(n-1); }
int main() {
	int n,i,j,c;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&ar[i]); }
		for(i=0;i<n;i++) {
		    for(j=1;j<=99;j++)
		    {    c=(fact(2(i+1)))/(fact(i+2)*fact(i+1));
		        if(a[i]<c)
		        printf("%d",c);
		        break; } }
	return 0; }