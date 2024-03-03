#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)return 1;
    return catalan(n-1)*2*(2*n-1)/(n+1); }
int main() {
int t,n,i,j;
scanf("%d",&t);
for(i=0;i<n;i++){
    scanf("%d",&n);
    for(j=0;j<n;j++){
        if(catalan(j)<n && catalan (j+1)>=n){
            printf("%d",catalan(j));break; } } }
	return 0; }