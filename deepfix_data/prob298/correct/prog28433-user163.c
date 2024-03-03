#include <stdio.h>
#include <stdlib.h>
int c(int n) {
    if(c(n)==0)
    return 1;
    else
    return (4*n-2)/(n+1)*c(n-1); }
int main() {
    int t,n,a[20],i;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
    scanf("%d\n",&a[t]);
    if(a[t]==c(t)) {
        printf("YES"); }
    else
    printf("NO"); }
	return 0; }