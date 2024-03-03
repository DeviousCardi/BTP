#include <stdio.h>
#include <stdlib.h>
int ans=0;
int catalan(int n){
    int catn;
    if(n==1) return 1;
    if(n==0) return 1;
    else {
        catn=catalan(n-1);
        ans=(4*n-2)*(catn)/(n+1);
        return ans; } }
int main() {
    int i,t=0,l;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++) scanf("%d\n",&a[i]); {
        printf("%d",catalan(a[i])); }
	return 0; }