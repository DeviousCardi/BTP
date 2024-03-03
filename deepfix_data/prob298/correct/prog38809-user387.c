#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
if(n==0) {
 return 1; }
    return (2*(2*n+1)/(n+2))*catalan(n-1); }
int main(){
    int i,t,k,n;
    int a[10000];
    scanf("%d",&t);
    for(i=0;i<n;i++) {
        a[i]=catalan(n); }
    if(k==a[i]) {
        printf("yes"); }
    else {
        printf("no"); }
    printf("\n");
    return 0; }