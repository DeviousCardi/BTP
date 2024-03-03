#include <stdio.h>
int main() {
     int n,m;
     scanf("%d %d", &n, &m);
     int k,i,j;
     int a[n];
     for(i=0;i<n;i++) {
         a[i] = 0;
         for(j=0;j<m;j++){
             scanf("%d", &k);
             a[i] = a[i] + k; } }
     int max = 0;
     for(i=0; i<n; i++){
         if(a[i] > max){
             max = a[i]; } }
     printf("%d", max);
    return 0; }