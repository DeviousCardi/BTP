#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,i,count,sum,j=0;
	scanf("%ld",&n);
	int a[n];
	for(i=1;i<n;i++)
	    if (n%i==0) {
	            a[j]=i;
	            j++; }
	count=j;
    for(j=0;j<=count;j++)
        sum=sum+a[j];
    if(n==sum)
        printf("YES");
    else
        printf("NO");
	return 0; }