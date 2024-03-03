#include <stdio.h>
#include <stdlib.h>
int main() {
    int t=0,test[100000],i=0,term=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&test[i]); }
    int fibser(int);
    for(i=0;i<t;i++) {
        term=fibser(test[i]);
        printf("%d\n",&term); }
	return 0; }
int fibser(int n) {
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    return (fibser(n-1)+fibser(n-2)); }