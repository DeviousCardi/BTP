#include <stdio.h>
int main() {
     int n, m;
     scanf("%d %d", &n, &m);
     int k,i,j;
     sum = 0;
     max = 0;
     for(i=0;i<n;i++) {
         sum = 0;
         for(j=0;j<m;j++){
             scanf("%d", &k);
             sum = sum + k; }
         if(sum > max){
             max = sum; } }
     printf("%d", max);
    return 0; }