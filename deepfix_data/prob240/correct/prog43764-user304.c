#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int val = 0;
    int i;
    if(n==0||n==1)
    return 1;
    for (i=0;i<n;i++) {
          val=val + catalan(i)*catalan(n-i-1); }
    return val; }
int main() {
	int t,i,j;
	scanf("%d",&t);
	int a[t];
	printf("%d",t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a[t]); }
	for(i=0;i<t;i++) {
	   for(j=0;catalan(j)<a[i];j++) ;
	    printf("%d\n",j);
	    printf("%d\n",catalan(j-1)); }
	return 0; }