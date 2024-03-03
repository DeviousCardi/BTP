#include <stdio.h>
int main() {
    int n[201];
    int ht,i,sum=0;
    for(i=1;i>=1 && i<=200;;i++) {
       if(n[i]>n[i-1] && n[i]<n[i+1]) {
           sum = sum +1; }
       else {
               continue; } }
   printf("%d",sum);
    return 0; }