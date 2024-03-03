#include <stdio.h>
int main(){
 int n=0;
 scanf("%d",&n);
 int N=n*n;
 int mat[N];
 int i=1;
 for(i=1;i<=N;i++) {
     scanf("%d",&mat[i]); }
 for(i=1;i<=N;i++) {
     printf("%d\n",mat[i]); }
    return 0; }