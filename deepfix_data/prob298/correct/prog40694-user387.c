#include <stdio.h>
#include <stdlib.h>
int catalan(int a, int n) {
if(n==0)
return 1;
else if(a==n-1) {
return ((n+1)/2*(2*n-1)); } }
int main() {
    int i,j,n,k,a,t;
    scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d",&n); }
    if((catalan(a,n))==k) {
        printf("yes"); }
    else {
        printf("no"); }
    printf("\n"); }