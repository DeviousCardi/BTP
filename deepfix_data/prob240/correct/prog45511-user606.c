#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==1)return 1;
    return catalan(n-1)*2*(2*n+1)*(2*n-1)/(n+1); }
int main() {
int t,n,i;
scanf("%d",&t);
for(i=0;i<n;i++){
    scanf("%d",&n);
    printf("%d\n",catalan(n)); }
	return 0; }