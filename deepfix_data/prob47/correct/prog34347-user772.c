#include <stdio.h>
#include <stdlib.h>
int cat(int k){
    if (k==0)
    return 1;
    else
    return ((4*k-2)*cat(k-1))/(k+1); }
int main() {
    int t, k, i, sum=0;
    scanf("%d",&t);
    for (i=0;i<t;i++) {
        scanf("%d",&k);
        for (i=0;i<k;i++) {
            sum=sum + cat(i); }
        printf("%d\n",sum);
        sum=0; }
	return 0; }