#include <stdio.h>
#include <stdlib.h>
int catalan(int a,int n,int k) {
if(n==0)
return 1;
else if(n-1==a) {
return ((n+1)/2*(2*n-1)); }
return 0; }
int main() {
    int i,j,n,k,a,t;
    scanf("%d",&t);
for(i=0;i<t;i++){
    if((int) (catalan(a,n,k))==k) {
        printf("yes"); }
    else {
        printf("no"); }
    printf("\n");
    return 0; } }