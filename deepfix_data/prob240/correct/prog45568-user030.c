#include <stdio.h>
#include <stdlib.h>
int sum=0;
int cat(int n) {
    int i;
    if(n==1||n==0)
        return 1;
    else {
        for(i=0;i<n;i++) {
            sum=sum+(cat(i)*cat(n-1-i)); }
        return sum; } }
int main() {
    int t,i,j,k;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
        scanf("%d\n",&k);
        j=0;
        while(cat(j)<k) {
            j++; }
        printf("%d\n",cat(j-1)); }
	return 0; }