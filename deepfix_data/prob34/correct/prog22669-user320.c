#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,a[20],t[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d",&m);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&t[i]); }
	for(i=0;i<m;i++) {
	    if(t[i]==0) {
	        if(a[0]>a[1])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	    else if(t[i]==n-1) {
	        if(a[n-1]>a[n-2])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	    else {
	   if(a[t[i]]>a[t[i]+1] && a[t[i]]>a[t[i]-1]) {
	        printf("Yes\n"); }
	         else {
	             printf("No\n"); } } }
	return 0; }