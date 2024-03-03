#include <stdio.h>
#include <stdlib.h>
long cats(int x) {
    if(x==0)
    return 1;
    else
    return ((2*x)*(2*x-1)*cats(x-1)/((x)*(x+1))); }
int main() {
    int t,i,n;
        scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        int j=0;
        while (cats(j)<=n && j<=17) {
             if (cats(j)==n) {
                 k=-1;
                 break; }
             else
                k++; }
            if (k<0)
            printf("yes\n");
            else
            printf("no\n"); }
	return 0; }