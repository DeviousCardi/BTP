#include <stdio.h>
#include <stdlib.h>
int cat(int k) {
    if(k==0);
    return 1;
    int i=0,n,t;
    for(i=0;i<k;i++) {
        t=cat(i)+cat(i)*cat(n-i); }
    return t; }
int main() {
    int t,k,i;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
            printf("%d\n",k); }
	return 0; }