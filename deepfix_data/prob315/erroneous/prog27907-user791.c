#include <stdio.h>
#include <stdlib.h>
int main() {
   int N,count=0,i,j;
   scanf("%d",&N)
   int A[N];
   for(i=0;i<N;i++)
   scanf("%d",&A[i]);
   for(i=0;i<N;i++)
   for(j=0;j<N;j++)
   if((A[i]>A[j])&&(i<j))
   count++;
   printf("%d",count);
	return 0; }