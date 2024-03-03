#include <stdio.h>
#include <stdlib.h>
int c(int n) {
    if(n!=1) {
        int p=0,i;
        for(i=0;i<n;i++) {
            p=p+c(i); }
        return p;
    else
    return 1; }
int main() {
	int t,a[100],i,j,sum=0;
	scanf("%d\n",&t);
	scanf("%s",a);
	for(i=0;i<t;i++) {
	    for(j=0;j<a[i];j++) {
	        sum=sum+c[j]; }
	    printf("%d\n",sum); }
	return 0; }