#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int a[n];
    int s[n];
    int i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(int i=0;i<n;i++) {
	    s[i]=0;
	    for(int j=i;j<n;j++) {
	        if(a[i]>a[j])
	        count=count+1;
	        s[i]=s[i]+1; } }
	for(int k=0;k<n;k++)
	printf("%d",s[k]);
	return 0; }