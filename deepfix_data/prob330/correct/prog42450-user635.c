#include <stdio.h>
int main() {
    int r,i=0,q=3;
    int n[i];
    int sum=0;
    r>=3 && r<=100;
    scanf("%d",&q);
       for(i=1;i>=1 && i<=(q-1);i++) {
          scanf("%d", &n[i]);
           if(n[i]>n[i-1] && n[i]>n[i+1]) {
             sum = sum +1; }
             else {
               continue; } }
   printf("%d",sum);
    return 0; }