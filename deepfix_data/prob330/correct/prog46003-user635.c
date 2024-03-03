#include <stdio.h>
int main() {
    int n[201];
    int i,sum=0;
    for(i=0;i>=0 && i<=201;i++) {
       if(n[i]>n[i-1] && n[i]>n[i+1]) {
           sum = sum +1; }
       else {
               continue; } }
   printf("%d",sum);
    return 0; }