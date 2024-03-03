#include <stdio.h>
int main() {
    int bid[100000],N,temp,i,j;
    scanf("%d",&N);
     for(i=0;i<N;i++)
    scanf("%d",&bid[i]);
    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
          if(bid[j]>bid[i])
          {temp=bid[i];
          bid[i]=bid[j];
          bid[j]=temp;} } }
    if(N%2==1&&N!=0)
    printf("%d",bid[N/2+1]);
    else
    printf("%f",(bid[N/2]+bid[N/2+1)/2]);
    return 0; }