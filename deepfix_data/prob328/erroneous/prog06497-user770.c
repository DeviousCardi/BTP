#include <stdio.h>
#include <stdlib.h>
int k;
void fibogen(int m, int n, int a) {
    int t;
    if(m==a)
    exit(0);
    t=m;
    m=m+n;
    n=t;
    k++
    fibogen(m,n,a); }
int main() {
    int r,i,t;
    scanf("%d", &r);
    for(i=0; i<t; i++)
    {   k=1;
        scanf("%d", &t);
        printf("%d\n", k); }
	return 0; }