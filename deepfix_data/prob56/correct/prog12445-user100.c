#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++) {
        int n,j;
        scanf("%d",&n);
        if(n<0)
       printf("1\n");
        for(j=0;;j++) {
        if(catalan(j)>n) {
        printf("%d\n",catalan(j));
        break; } } }
	return 0; }
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return (2*(2*n-1)*catalan(n-1))/n+1; }