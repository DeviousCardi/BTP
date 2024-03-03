#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i,k;
    if (n<=k)
    return 1;
    int ans=0;
    for(i=2;i<n;i++) {
        ans=ans+catalan(i)*catalan(n-i-1); }
    return ans; }
int main() {
	int k,i,j,a=0,arr[20];
	scanf("%d",&k);
	for(i=0;i<k;i++) {
	    scanf("%d\n",&arr[i]); }
       for(i=0;i<k;i++) {
	      if(arr[i]==catalan(j)) {
	          printf("yes\n"); }
	      else printf("no\n"); }
	return 0; }