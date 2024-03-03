#include <stdio.h>
int main() {
    int i,N,temp;
     scanf("%d",&N);
    int bid[N];
     for(i=0;i<N;i++)
      scanf("%d",&bid[i]);
    temp=bid[1];
    bid[1]=bid[2];
    bid[2]=temp;
    printf("%d",bid[1]);
    return 0; }