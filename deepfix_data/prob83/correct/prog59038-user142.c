#include <stdio.h>
int main() {
    int n,i,d;
    scanf("%d",&n);
    scanf("%d",&d);
    int ar[n];
      for(i=0;i<=(n-1);i++) {
    if(ar[n]==ar[n-i]) {
      printf("%d/n",ar[n]); }
    for(i=0;(n-d)<i<(n+d);i++) {
          ar[n]=ar[d-i]; } }
    printf("%d",ar[n]);
    return 0; }