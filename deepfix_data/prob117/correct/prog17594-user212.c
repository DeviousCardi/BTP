#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    else return 2*hanoi(n-1)+1; }
int main() { int t,k,i,j;
             scanf("%d\n",&t);
             for(i=0;i<t;i++){
                 scanf("%d",&k);
             for(j=0;j<=k;j++){
                 if (hanoi(j)==k){printf("yes\n"); break;}
                 if (hanoi(j)>k) {printf("no\n"); break;} } }
  return 0; }