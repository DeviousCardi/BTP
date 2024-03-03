#include <stdio.h>
#include <stdlib.h>
int fact(int n){    int i,sum=1;
for(i=1;i<=n;i++){
    sum=sum*i; }
    if(n==0)
    return 1;
    else
    return sum; }
int catalan(int n ){int t=0,i;
for(i=2;i<=t;i++){
    t=t*(n+i)/i; }
    if (n==0)
    return 1;
    else
    return t; }
int main() {
    int i,t,sum=0,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(i=1;i<=n;i++) {
            sum=sum+catalan(i); }
        printf("%d\n",sum); }
	return 0; }