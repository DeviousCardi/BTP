#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
    return 1;
    else
    return (2.0*(2*n-1)/(n+1))*catalan(n-1); }
int main() {
int t,i,n,j,sum=0;
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&n);
    for(j=0;j<n;j++) {
      sum=sum+catalan(j); }
    printf("%d/n",sum); }
	return 0; }