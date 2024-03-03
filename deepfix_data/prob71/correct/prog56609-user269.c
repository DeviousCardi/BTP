#include <stdio.h>
int main() {
    int i,N,temp,k=0,j;
     scanf("%d",&N);
    int bid[N];
     for(i=0;i<N;i++)
      scanf("%d",&bid[i]);
     for(i=0;i<N;i++) {
         for(j=i;j<N;j++) {
           if(bid[i]>k)
            k=bid[i]; }
             temp=k;
             bid[i]=k;
             bid[i]=temp; }
    printf("%d",bid[1]);
    return 0; }