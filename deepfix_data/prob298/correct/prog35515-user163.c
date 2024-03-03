#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int catalan(int n) {
    if(0)
    return 1;
    else
    return (4*n-2)/(n+1)*catalan(n-1); }
int main() {
    int t,a[20],i,k;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
    scanf("%d\n",&a[t]); }
    for(i=1;i<=17;i++) {
        k=catalan(i);
        if(a[t]==k) {
            printf("yes"); }
            else
            printf("no"); }
	return 0; }