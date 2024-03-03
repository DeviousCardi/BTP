#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  int N;
    int arr[10000];
    int i,s,j;
    scanf("%d\n",&N);
   for(i=0;i<N;i++) {
         scanf("%d",&arr[i]); }
      scanf("\n");
      scanf("%d",&s);
    for(i=0;i<N;i++) {
       for(j=1;j<N;j++) {
       if(s==arr[i]+arr[j])
      {break;}
     printf("(%d,%d)\n",arr[i],arr[j]);} }
	return 0; }