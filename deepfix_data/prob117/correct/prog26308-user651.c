#include <stdio.h>
#include <stdlib.h>
long int toh(int n) {
     long int k;
     if(n==0)return 0;
     if(n==1)return 1;
     k=2*toh(n-1) + 1;
     return k; }
int main() {
     int i,j,t;
     long int k,k1;
     scanf("%d\n",&t);
     for(i=0;i<t;i++) {
         scanf("%ld\n", &k);
         j=0;
         do {
             k1=toh(j);
             j++; }
         while(k1<k);
         if(k1==k)printf("yes\n");
         else printf("no\n"); }
 return 0; }