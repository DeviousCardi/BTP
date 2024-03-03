#include <stdio.h>
#include <stdlib.h>
int catalan(n){
    if(n==0)
    return 1;
    else
    return (2*catalan(n-1)*(2*n-1))/(n+1); }
int main() {
    int i,j,t;
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++)
    scanf("%d\n",&n[i]);
    for(i=0;i<t;i++) {
        printf("%d\n",catalan(n[i])); }
	return 0; }