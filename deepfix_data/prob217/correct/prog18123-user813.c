#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,s,n;
    scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++)
	    if(a[i]+a[j]==s && i!=j)
	    printf("%d%d\n",a[i],a[j]); }
	return 0; }