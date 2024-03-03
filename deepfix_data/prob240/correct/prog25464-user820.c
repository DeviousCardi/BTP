#include <stdio.h>
#include <stdlib.h>
int c(int k) {
    if(k>0) {
        return ((c(k-1)*(2*k-1)*2)/(k+1)); }
    if(k==0)
    return 1; }
int main() {
    int t,k,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;j<k;j++) {
            if(k>c(j))
            continue;
            else {
                printf("%d\n",c(j-1));
                break; } } }
	return 0; }