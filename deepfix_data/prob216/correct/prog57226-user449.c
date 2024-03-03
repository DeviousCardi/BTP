#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    if(n==1) return 0;
else if(n==2) return 1;
else return (fibo(n-1)+fibo(n-2)); }
int main() {
    int n,num,t,i;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
        scanf("%d\n",&n);
        num=fibo(n);
        printf("%d\n",num); }
	return 0; }