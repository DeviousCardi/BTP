#include <stdio.h>
#include <stdlib.h>
int main() {
long n;
scanf("%ld",&n);
long ar[n];
int i,j;
long sum;
for(i=0;i<n;i++) {
     scanf("%ld",&ar[i]); }
for(j=0;j<n;j++) {
     scanf("%ld",&ar[j]); }
   sum=ar[i]+ar[j];
printf("%ld",sum);
return 0; }