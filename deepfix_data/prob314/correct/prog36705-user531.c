#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20];
	int i,j,n,t,k,x;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&t);
	for(j=0;j<t;j++)
	{scanf("%d\n",&x);
	    if(n==1)
	         { printf("Yes");}
	    else if(x==0) {
	        if(a[0]<a[1])
	         printf("Yes\n");
	         else
	          printf("No\n"); }
	    else if(x==n-1) {
	        if(a[n-1]<a[n-2])
	         printf("Yes\n");
	         else
	    printf("No\n"); }
	    else if((a[x]<a[x+1]) && (a[x]<a[x-1])) {
	        printf("Yes\n"); }
	    else
	    {printf("No\n");} }
	return 0; }