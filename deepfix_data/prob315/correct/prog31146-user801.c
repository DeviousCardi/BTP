#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int flag[10];
    scanf("%d",&n);
	int a[n];
	int sum=0;
	int i,k;
	for(i=0;i<n;i++) {
	    flag[i]=0;
	    int j;
	    for(j=i+1;j<n;j++) {
	        if (a[i]>a[j])
	        flag[i]=flag[i]+1;
	        sum=sum+1; } }
	for(k=0;k<n;k++)
	printf("%d",flag[k]);
	printf("%d",sum);
	return 0; }