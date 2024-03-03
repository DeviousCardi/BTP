#include <stdio.h>
int main() {
    int i,N,temp,j;
     scanf("%d",&N);
    int bid[N];
     for(i=0;i<N;i++)
      scanf("%d",&bid[i]);
     for(i=0;i<N;i++) {
         int k=-1;
         for(j=i;j<N;j++) {
           if(bid[j]>k)
            k=bid[j]; }
             temp=k;
             k=bid[i];
             bid[i]=temp; }
    printf("%d",bid[0]);
    return 0; }