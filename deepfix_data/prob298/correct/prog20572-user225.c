#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if (n==0)
    return 1;
    else if (n==1)
    return 1;
    else {
      return ((4*n-2)*catalan(n-1))/(n+1); } }
int main() {
	int i,t,n,j,flag;
	scanf("%d",&t);
	printf("%d",catalan(16));
	for(i=0;i<t;i++)
	{   flag=0;
	    scanf("%d",&n);
	    for(j=0;j<=n+1;j++) {
	        if(n==catalan(j)) {
	            flag=1;
	            break; }
	        else if(catalan(j)>n) {
	            break; } }
	    if(flag==1) {
	        printf("yes\n"); }
	    else {
	        printf("no\n");
	    }	}
	return 0; }