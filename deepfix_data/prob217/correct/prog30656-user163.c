#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,i,b,c,sum;
    scanf("%d\n",&n);
    int a[20];
    for(i=0;i<=n;i++) {
        scanf("%d\n",&a[i]); }
    scanf("%d\n",&b);
    for(i=0;i<b;i++) {
        scanf("%d\n",&a[b]); }
    scanf("%d\n",&c);
    for(i=0;i<c;i++) {
        scanf("%d\n",&a[c]); }
    scanf("%d\n",&sum);
    if (sum==a[b]+a[c]&&a[c]!=a[b]) {
        printf("%d%d",(a[b],a[c])); }
	return 0; }