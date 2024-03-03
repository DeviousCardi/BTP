#include <stdio.h>
#include <stdlib.h>
int main() {
    long n;
    int i,j;
    long sum;
    scanf("%ld\n",&n);
    long a[n],s;
    for (i=0;i<n;i++) {
        scanf("%ld\n",&a[i]); }
    scanf("%ld\n",&s);
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            sum=0;
            sum=a[i]+a[j];
            if (sum==s);
            printf("YES"); } }
	return 0; }