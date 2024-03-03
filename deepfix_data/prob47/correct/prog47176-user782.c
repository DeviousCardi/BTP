#include <stdio.h>
#include <stdlib.h>
int ncr(int n,int r){
    if(n>r || r<0)
        return 0;
    else if(n==0 || r==0)
        return 1;
    else
        return ncr(n-1,r)+ncr(n-1,r-1) ; }
int catln_sum(int n){
    if(n==1)
        return 1;
    else
        return (1/(n+1))*ncr(2*n,n)+catln_sum(n-1); }
int main(){
    int n,i,mat[90];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&mat[i]); }
    for(i=0;i<n;i++){
        printf("%d\n",catln_sum(mat[i])); }
return 0; }