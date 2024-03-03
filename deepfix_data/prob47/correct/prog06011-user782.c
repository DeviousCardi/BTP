#include <stdio.h>
#include <stdlib.h>
long factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1); }
long c(int n,int k){
    if(n<k)
        return 0;
    else if(n==0 && k==0)
        return 1;
    else
        return factorial(n)/(factorial(k)*factorial(n-k)) ; }
long sum(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return c(2*(n-1),n-1)-c(2*(n-1),n)+sum(n-1); }
int main(){
    int i,n,mat[23];
    scanf("%d\n",&n);
    for(i=1;i<n;i++){
        scanf("%d\n",&mat[i]); }
    for(i=0;i<n;i++){
        printf("%d\n",sum(mat[i])); }
    return 0; }