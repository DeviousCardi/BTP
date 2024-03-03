#include <stdio.h>
#include <stdlib.h>
int main() {
    long n;
    int i,k=0;
    scanf("%ld\n",&n);
    long long a[n],s;
    for (i=0;i<n;i++) {
        scanf("%lld\n",&a[i]); }
    scanf("%lld\n",&s);
    for (i=0;i<n;i++) {
        for (j=0;j>i;j++) {
            sum=a[i]+a[j];
            if (sum==s); {
               printf("(%d,%d)\n",i,j);
               k=1; } } }
    if (k==0)
    printf("no output");
	return 0; }