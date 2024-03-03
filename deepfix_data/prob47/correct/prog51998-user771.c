#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,value=0;
    if(n==0 || n==1)
        return 1;
    else {
            for(i=0;i<n;i++) {
                value=value+catalan(i)*catalan(n-i-1); }
            return value; } }
int main() {
    int t,k,i,j,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        for(j=0;j<k;j++) {
            sum=sum+catalan(j); }
        printf("%d\n",sum);
        sum=0; }
	return 0; }