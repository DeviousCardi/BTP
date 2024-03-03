#include <stdio.h>
#include <stdlib.h>
int k=0;
int fibogen(int m, int n, int a) {
    int t, l=0;
    if(m==a) {
        l=1; }
    if(m!=a || k<20)
    {t=m;
    m=m+n;
    n=t;
    k++;
    l=fibogen(m,n,a);}
    return l; }
int main() {
    int t, m,i;
    scanf("%d",&m);
    for(i=0; i<m; i++)
        {scanf("%d", &t);
        if(t==0)
        printf("yes\n");
        else if(fibogen(1,0,t)==1)
        printf("yes\n");
        else
        printf("no\n"); }
	return 0; }