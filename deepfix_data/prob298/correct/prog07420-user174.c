#include <stdio.h>
#include <stdlib.h>
int sum=0;int k;int a[17];
int catalan(int n)
{ if(n==0)
return 1;
return((2.0*(2*n-1)/(n+1))*catalan(n-1)); }
int main() {int i;
int t;int flag=0;
scanf("%d",&t);
    for(i=0;i<17;i++) {
        a[i]=catalan(i); }
    int j;
   for(i=0;i<t;i++) {
    scanf("%d",&k);
    for(j=0;j<17;j++) {
        if(k==a[j])
        {   flag=1;
            printf("yes\n"); } }
    if(flag==0)
    printf("no\n"); }
	return 0; }