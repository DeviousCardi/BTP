#include <stdio.h>
int main() {
    int i,N,temp,j;
     scanf("%d",&N);
    int bid[N];
     for(i=0;i<N;i++)
      scanf("%d",&bid[i]);
     for(i=0;i<N;i++) {
         int k=0;
         for(j=i;j<N;j++) {
           if(bid[j]>k)
            k=bid[j]; }
             temp=k;
             bid[i]=k;
             bid[i]=temp; }
    printf("%d",bid[2]);
    return 0; }