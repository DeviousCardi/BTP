#include <stdio.h>
#include <stdlib.h>
int main() {
   int N,count=0,i,j;
   scanf("%d",&N);
   int A[N],a[N];
    for(i=0;i<N;i++)
    a[i]=0;
   for(i=0;i<N;i++)
   scanf("%d",&A[i]);
   for(i=0;i<N;i++)
   for(j=0;j<N;j++)
   if((A[i]>A[j])&&(i<j)){
   count++;
   a[i]++; }
   printf("%d/n",count);
   for(i=0;i<N;i++)
   printf("%d ",a[i]);
	return 0; }