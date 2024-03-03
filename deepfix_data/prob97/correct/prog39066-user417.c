#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    int k;
    scanf("%d",&k);
          for(i=0;i<k;i++) {
           for(j=0;j<k+(2*i);j++) {
           if(j>=(k-1))
           printf("%d",k-j); }
          printf("\n");
          k=k-1; }
         return 0; }