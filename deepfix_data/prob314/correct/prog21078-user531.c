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
	    if(n==1)
	    printf("Yes");
	    else if(a[s[k]]<a[s[k+1]]&&a[s[k]]<a[s[k-1]]) {
	        printf("Yes"); }
	    else if(s[k]==0) {
	        if(a[0]<a[1])
	         printf("Yes\n");
	         else
	    printf("No\n"); }
	    else if(s[k]==n-1) {
	        if(a[n-1]<a[n-2])
	         printf("Yes\n");
	         else
	    printf("No\n"); }
	    else
	    printf("No\n"); }
	return 0; }