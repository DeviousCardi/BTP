#include <stdio.h>
#include <stdlib.h>
int catalan(int x) {
    if (x==0)
    return 1;
    else
    return ((2*x)*((2*x)-1)*catalan(x-1))/(x*(x+1)); }
int main() {
    int t,k,i,temp;
    scanf("%d",&t);
    for (i=0;i<t;i++) {
        scanf("%d",&k);
        temp=0;
        while(catalan(temp)<=k) {
            temp++; }
        printf("%d",catalan(temp)); }
	return 0; }