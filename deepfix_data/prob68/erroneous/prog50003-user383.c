#include<stdio.h>
int main()
{ int N;
  scanf("%d\n",&N);
  int A[N],i ;
  for(i=0,i<N,i++){
      scanf("%d",&A[i]); }
   for(i=0,i<N,i++){
       printf("%d ",A[i]); }
    return 0; }