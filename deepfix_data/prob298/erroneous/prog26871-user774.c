#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    int i,a;
    for(i=2;i<=n;i++) {
        a=a*(n+i)/i }
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return a; }
int main() {
	int n,i,j;
    scanf("%d\n",&t);
    int f[n];
    for(i=0;i<n;i++) {
        int a=0;
    scanf("%d\n",&f[i]);
    for(j=0;j<20;j++) {
        if(cat(j)==f[i])
        a++; }
    if(a!=0)
    printf("yes\n");
    else
    printf("no\n"); }
  	return 0; }
	return 0; }