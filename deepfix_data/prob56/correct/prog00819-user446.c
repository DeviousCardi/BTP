#include <stdio.h>
#include <stdlib.h>
int t=0;
long int cat(int n){
    if(n==0)return 1;
    t=cat(n-1);
    return t*2*(2*n-1)/(n+1); }
int main() {
	int t,i,k,n;
	scanf("%d",&t);
	printf("%d",cat(4));
    for(i=0;i<t;i++){
        scanf("%d",&k);
        for(n=0;cat(n)<=k;n++);
        printf("%ld\n",cat(n)); }
	return 0; }