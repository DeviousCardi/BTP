#include <stdio.h>
int odd(int N);
int main() {
    int bid[10000000],N,temp,i,j;
    scanf("%d",&N);
    scanf("%d",bid);
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
          if(bid[j]>bid[i])
          temp=bid[i];
          bid[i]=bid[j];
          bid[j]=temp;
          printf("%d",bid[j]); } }
    return 0; }
int odd(int n) {
    int k,N,bid[10000000];
    if(n!=0&&n!=2*k)
    odd(n);
    return n;
     if(N==odd(n))
      printf("%d",bid[(N+1)/2]);
       else{
         printf("%.f",(bid[N/2]+bid[N/2+1])/2); }
     return 0; }