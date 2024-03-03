#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return ((2*(2*n-1)*catalan(n-1))/(n+1)); }
int main() {
    int t,i=0,c,j,sum=0;
    scanf("%d\n",&t);
    while(i!=t) {
   scanf("%d\n",&c);
    for(j=0;j<c;j++) {
    sum=sum+catalan(j); }
    printf("%d\n",sum);
    i=i+1; }
	return 0; }