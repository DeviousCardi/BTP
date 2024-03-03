#include <stdio.h>
#include <stdlib.h>
int fact(int n){    int i,sum=1;
for(i=1;i<=n;i++){
    sum=sum*i; }
    if(n==0)
    return 1;
    else
    return sum; }
int catalan(int n ){
    if (n==0)
    return 1;
    else
    return fact(2*n)/(fact(n+1)*fact(n)); }
int main() {
    int i,t,j,sum=0,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++) {
            sum=sum+catalan(j); }
        printf("%d\n",sum);
        sum=0; }
	printf("%d",catalan(5));
	return 0; }