#include <stdio.h>
#include <stdlib.h>
long factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1); }
long prodct(int n){
    if(n==n/2)
        return 1;
    else
        return n*prodct(n-1); }
long sum(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return prodct(2*(n-1))/factorial(n) +sum(n-1) ; }
int main(){
    int i,n,mat[23];
    scanf("%d\n",&n);
    for(i=1;i<n;i++){
        scanf("%d\n",&mat[i]); }
    for(i=0;i<n;i++){
        printf("%ld\n",sum(mat[i])); }
    return 0; }