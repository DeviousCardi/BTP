#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n],in[n],j,i,total=0;
	for(i=0;i<n;i++)
	    scanf("%d",a+i);
	for(i=0;i<n;i++)
	    in[i]=0;
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[j]<a[i])
	            in[i]++; } }
	for(j=0;j<n;j++)
	    total+=in[j];
    printf("%d\n",total);
    for(j=0;j<n-1;j++)
        printf("%d ",in+j);
    printf("%d",in[n-1]);
	return 0; }