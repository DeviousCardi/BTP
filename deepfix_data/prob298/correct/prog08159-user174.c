#include <stdio.h>
#include <stdlib.h>
int sum=0;int k;int a[17];
int catalan(int n)
{ if(n==0)
return 1;
return((2.0*(2*n-1)/(n+1))*catalan(n-1)); }
int main() {int i;
int t;
scanf("%d",t);
    for(i=0;i<17;i++) {
        a[i]=catalan(i); }
    for(i=0;i<17;i++)
    {printf("%d ",a[i]); }
    for(i=0;i<t;i++) {
    scanf("%d",k);
    for(i=0;i<17;i++) {
        if(k==a[i]) {
            printf("yes");
            return 0; } } }
    printf("no");
	return 0; }