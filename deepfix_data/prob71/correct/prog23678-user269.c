#include <stdio.h>
int main() {
    int i,N,temp,j,b;
     scanf("%d",&N);
    int bid[N];
     for(i=0;i<N;i++)
      scanf("%d",&bid[i]);
     for(i=0;i<N;i++) {
         int k=-1;
         for(j=i;j<N;j++) {
           if(bid[j]>k)
            k=bid[j]; }
         for(j=0;j<N;j++) {
              if(bid[j]==k)
              b=j; }
             temp=bid[b];
             bid[b]=bid[i];
             bid[i]=temp; }
    if(N%2==0)
    printf("%.1f",(bid[N/2]+bid[(N/2)-1])/2.0);
    return 0; }