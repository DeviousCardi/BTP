#include <stdio.h>
#include <stdlib.h>
int key=0, flag=0,ncordi=0, kcordi=0;
int binomial(int n, int k);
int binomial(int n, int k) {
    if(n<k) return 0;
    if(n==0 && k==0) return 1;
    if(k==0) return 1;
    int a;
    a = binomial(n-1, k) + binomial(n-1, k-1);
    if(key==a) {
        flag=1; ncordi=n; kcordi=k; }
    return a; }
int main() { int grbg=0;
    scanf("%d", &key);
    grbg=binomial(21, 20);
    if(flag==1) {
        printf("%d %d", ncordi, kcordi); }
    else printf("-1");
	return 0; }