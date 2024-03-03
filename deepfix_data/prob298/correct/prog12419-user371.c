#include <stdio.h>
#include <stdlib.h>
unsigned int fac(int n) {
    unsigned int f=1;
    for(;n>1;n--) {
        f*=n; }
    return f; }
int catlan(int n) {
    int i;
    unsigned int f;
    if(n==0) {
        return 0; }
    if(n>0) {
        for(i=1;i<=17;i++) {
            f=(fac(2*i))/((fac(i+1))*(fac(i)));
            printf("%d\n",f);
            if(f==n) {
                return 1; } } }
    return 0; }
int main() {
	int t, i, k;
	scanf("%d\n",&t);
	printf("%d",catlan(4862));
	return 0; }