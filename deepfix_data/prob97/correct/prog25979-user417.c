#include <stdio.h>
#include <stdlib.h>
int main() {
    int k,i,j;
    scanf("%d",&k);
          for(i=0;i<k;i++) {
           for(j=0;j<k+(2*j+1);j++) {
           if(j>=(k-1))
           printf("%d",k); }
          printf("\n");
          k=k-1;
          if(k<0)
          k=k+10; }
    return 0; }