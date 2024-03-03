#include <stdio.h>
#include <stdlib.h>
int steps(int n,int a[]) {
    int m=0,int i;
    if(n==1)
    m=1;
    else if(n==0)
    m=1;
   else
    for(i=2;i<25;i++) {
           if(n==a[i])
           m=1;
           break; }
   return m; }
int main() {
	int t,n,i
	int a[25];
	a[0]=0;
	a[1]=1;
	for(i=2;i<25;i++) {
	      a[i]=2*a[i-1] + 1; }
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&n);
	    if(steps(n,a)==1)
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }