#include <stdio.h>
int main() {
    int r,i,q=3;
    int n[i];
    int sum=0;
    r>=3 && r<=100;
    scanf("%d",&r);
       for(i=1;i>=1 && i<=(r-1);i++) {
           if(n[i]>n[i-1] && n[i]>n[i+1]) {
             sum = sum +1; }
             else {
               continue; } }
   printf("%d",sum);
    return 0; }