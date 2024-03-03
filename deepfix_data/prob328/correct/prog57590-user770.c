#include <stdio.h>
#include <stdlib.h>
int fibogen(int m, int n, int a) {
    int t, l=0;
    if(m==a) {
        l=1;
        return l; }
    if(m!=a)
    {t=m;
    m=m+n;
    n=t;
    l=fibogen(m,n,a);}
    return l; }
int main() {
    int t;
        scanf("%d", &t);
        if(fibogen(1,0,t)==1)
        printf("yes");
        else
        printf("no");
	return 0; }