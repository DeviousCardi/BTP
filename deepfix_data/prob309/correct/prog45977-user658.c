#include <stdio.h>
int main() {
 int n,A[1000],i,j,f=0,k=0;
 scanf("%d",&n);
 for(i=0;i<n;i++) {
     scanf("%d,",&A[i]); }
 for(i=0;i<n;i++) {
     for(j=i;j<n;j++) {
         if(A[j]==A[i])
         f++; }
     if(f!=A[i]) {
         k++;
         break; } }
 if(k)
 printf("No");
 else
 printf("Yes");
    return 0; }