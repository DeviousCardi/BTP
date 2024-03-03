#include <stdio.h>
int main(){
 int n,i,num,l=1,iden=0;
 scanf("%d",&n);
 for(i=1;i<n*n;i++) {
    scanf("%d",&num);
     if(i%n==l) {
         if(num != 1) {
             iden = 0;
             break; }
         else
         iden++; }
     else {
         if(num!=0) {
             iden=0;
             break; }
         else
         iden++; }
     if(i%n==0) {
        l++;
        l= l%n; } }
 if(iden ==0)
 printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
 else
 printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }