#include <stdio.h>
#include <stdlib.h>
int k=1;
void fibogen(int m, int n, int a) {
    int t;
    if(m==a)
    exit(0);
    t=m;
    m=m+n;
    n=t;
    k++;
    fibogen(m,n,a); }
int main() {
    int t;
        scanf("%d", &t);
        printf("%d\n", k);
	return 0; }