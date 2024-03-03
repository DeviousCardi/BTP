#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
	int a[n];
	int sum=0;
	for(i=0;i<n;i++) {
	    int flag=0;
	    int j;
	    for(j=i+1;j<n;j++) {
	        if (a[i]>a[j])
	        flag=flag+1;
	        sum=sum+1; }
	    printf("%d",flag); }
	return 0; }