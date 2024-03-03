#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    {return 1;}
    return ((2*(2*n-1))/(n+1))*cat(n-1); }
int main() {
    int t,i;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]); }
    for(i=0;i<t;i++) {
    printf("%d\n",cat(k[i])); }
	return 0; }