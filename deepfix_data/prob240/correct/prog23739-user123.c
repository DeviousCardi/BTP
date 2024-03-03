#include <stdio.h>
#include <stdlib.h>
double catalan_no(int n) {
    if(n<=1)
    return 1;
    else return (2*(2*n-1)*catalan_no(n-1))/(n+1); }
int main() {
    double k,t,i,j;
    scanf("%lf",&t);
    for(i=0;i<t;i++) {
        scanf("%lf",&k);
        for(j=k;j>0;j--) {
            if(k>catalan_no(j)) {
              printf("%d\n",(int)(catalan_no(j)));
                break; } } }
	return 0; }