#include <stdio.h>
int main() {
    int i,q=3;
    int n[i];
    int sum=0;
    scanf("%d",&q);
    while( q!=100) {
       for(i=1;i>=1 && i<=(q-1);i++) {
           if(n[i]>n[i-1] && n[i]>n[i+1]) {
             sum = sum +1; }
             else {
               continue; }
           q =q+1; } }
   printf("%d",sum);
    return 0; }