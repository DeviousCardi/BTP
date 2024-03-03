#include <stdio.h>
int main(){
 int n=0;
 scanf("%d",&n);
 int N=n*n;
 int mat[N];
 int i=1;
 for(i=1;i<=N;i++) {
     scanf("%d",&mat[i]); }
 int score=0;
 int j=1;
 for(j=1;j<=N;j++) {
     if(mat[j]==0){score=score+1;} }
if(score==N) {
printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
else if(score==(N-n)) {
     int k=1;
     for(k=1;k<=N;k=k+n+1) {
         if(mat[k]==1){score=score+1;} }
if(score==N)
 {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);} }
  else
 {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
    return 0; }