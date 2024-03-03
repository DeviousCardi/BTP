#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
   scanf("%d",&N);
   int A[1000],A2[1000];
   int count=0,count2;
  for(int i=0;i<N;i++){
       scanf("%d",&A[i]); }
    int l=0;
    for(int i=0;i<N;i++)
    {count2=0;
        for(int j=i+1;j<N;j++) {
            if(A[j]<A[i]) {
          count++,count2++; } }
         count2=A2[l]; l++; }
    printf("%d\n",count);
    for(int i=0;i<N;i++) {
        printf("%d ",A2[i]); }
	return 0; }