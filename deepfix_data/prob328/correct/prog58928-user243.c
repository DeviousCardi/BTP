#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    if(n==1)
    return 0;
    else
    if(n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2); }
int main() {
    int i,j,k,c=0,t;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
    scanf("%d\n",&k);
    for(j=1;j<=20;j++) {
        if(fibo(j)==k)
       {printf("%d",j);
        c=1;
        break; } }
    if(c==0)
    printf("no\n");
    else
	printf("yes\n"); }
	return 0; }