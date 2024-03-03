#include<stdio.h>
int main()
{ int N;
  scanf("%d\n",&N);
  int A[N],i ;
  for(i=0;i<N;i++){
      scanf("%d ",&A[i]); }
     int p=1;
      for(i=0;i<N;i++){
          p=p*A[i]; }
     printf("%d",p);
    return 0; }