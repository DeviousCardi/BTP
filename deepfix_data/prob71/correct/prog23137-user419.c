#include <stdio.h>
int main() {
    int bid[10000000],N,temp,i,j;
    scanf("%d",&N);
    scanf("%d",bid);
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
          if(bid[j]>bid[i])
          temp=bid[i];
          bid[i]=bid[j];
          bid[j]=temp; }
         printf("%d",bid[j]); }
    return 0; }