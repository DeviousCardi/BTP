#include <stdio.h>
#include <stdlib.h>
int c(int k) {
    if(k>0) {
        return ((c(k-1)*(2*k-1)*2)/(k+1)); }
    if(k==0)
    return 1; }
int main() {
    int t,k,i;
    printf("%d",c(0));
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        printf("%d\n",c(k)); }
	return 0; }