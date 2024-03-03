#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  int N;
    int arr[N];
    int i,s,j,n;
    scanf("%d\n",&N);
    scanf("%d\n",&n);
    scanf("%d",&s);
   for(i=0;i<N;i++) {
         scanf("%d",&arr[i]); }
    for(i=0;i<N;i++) {
       for(j=1;j<N;j++) {
       if(s==arr[i]+arr[j]);
      printf("(%d,%d)\n",arr[i],arr[j]); } }
	return 0; }