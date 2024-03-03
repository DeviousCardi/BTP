#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(0)
    return 1;
    else
    return (4*n-2)/(n+1)*catalan(n-1); }
int main() {
    int t,n,a[20],i;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
    scanf("%d\n",&a[t]);
    if(a[t]==catalan(t)) {
        printf("no\n"); }
    else
    printf("yes\n"); }
	return 0; }