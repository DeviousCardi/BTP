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
    scanf("%d",&t);
    for(i=1;i<=k;i++) {
    scanf("%d",&k);
    for(j=1;j<=20;j++) {
        if(fibo(i)==k) {
        c=1;
        break; } }
    if(c==0)
    printf("NO");
    else
	printf("YES"); }
	return 0; }