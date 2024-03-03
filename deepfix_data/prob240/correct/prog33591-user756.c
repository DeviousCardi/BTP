#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else return(n*fact(n-1)); }
int catalon(int n) {
    if (n==0)
    return 1;
    else return((2*(2*n+1)*catalon(n-1))/(n+2)); }
int main() {
    int t,i,arr[t];
    scanf("%d",&t);
    printf("%d",catalon(1));
	return 0; }