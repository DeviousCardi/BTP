#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    float i,sum=0;
    if(n==0) {
        return 1; }
    else if(n>0) {
    for(i=2;i<=n;i++) {
        sum=sum+(n+i)/(i); } }
    return sum; }
int main() {
	int t,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&j);
	    printf("%d\n",catalan(j));
	    break; }
	return 0; }