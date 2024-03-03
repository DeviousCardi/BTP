#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(0)
    return 1;
    else
    return (4*n-2)/(n+1)*catalan(n-1); }
int main() {
    int t,i,a[20],j;
    scanf("%d\n",&t);
    for(i=17;i>=1;i--) {
    for(j=1;j<=t;j++) {
        scanf("%d\n",&a[j]);
        if(a[j]==catalan(i)) {
        printf("yes"); }
        else
        printf("no"); } }
	return 0; }