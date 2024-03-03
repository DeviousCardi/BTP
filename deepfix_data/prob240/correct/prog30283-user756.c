#include <stdio.h>
#include <stdlib.h>
int catalon(int n) {
     if (n==0)
    return 1;
    if (n==1)
    return 1;
    else return((2*(2*n-1)*catalon(n-1))/(n+1)); }
int main() {
    int t,i,arr[t];
    scanf("%d",&t);
    printf("%d",catalon(5));
	return 0; }