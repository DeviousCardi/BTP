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
    for(i=1;i<=t;i++) {
        scanf("%d\n",&a[i]); }
    for(j=1;j<=17;j++) {
        if(catalan(j)==a[1]) {
            printf("yes"); }
        else
        printf("no");
        continue; }
	return 0; }