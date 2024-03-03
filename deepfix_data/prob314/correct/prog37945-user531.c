#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20];
    int	s[8];
	int i,j,n,t,k,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{scanf("%d",&s[j]); }
	for(k=1;k<t-1;k++) {
	    if(a[s[k]]<a[s[k+1]]&&a[s[k]]<a[s[k-1]]) {
	        c++; } }
	if(c>0||s[0]<s[1]||s[n-1]<s[n-2]) {
	    printf("Yes\n"); }
	else{
	    printf("No\n"); }
	return 0; }