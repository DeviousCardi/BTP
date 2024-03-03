#include <stdio.h>
#include <stdlib.h>
int cat(int k){
    if (k==0)
    return 0;
    else if
    return ((4*k-2)/(k+1))*cat(k-1); }
int main() {
    int t, k, i;
    scanf("%d",&t);
    for (i=0;i<t;i++) {
        scanf("%d",&k);
        printf("%d\n",cat(k)); }
	return 0; }