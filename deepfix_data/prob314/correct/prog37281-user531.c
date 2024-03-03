#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20];
    int	s[8];
	int i,j,n,t,k;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{scanf("%d",&s[j]); }
	for(k=0;k<t;k++) {
	    if(a[s[k]]>a[s[k+1]]&&a[s[k]]>a[s[k-1]]) {
	        printf("Yes"); }
	    else{
	        printf("No"); } }
	return 0; }