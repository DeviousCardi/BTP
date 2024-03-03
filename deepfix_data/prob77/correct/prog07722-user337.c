#include <stdio.h>
int main()
{   int N,i,j;
    int min,max,swap;
    scanf("%d",&N);
    int c[N];
    for (i=0;i<N;i++)
    scanf("%d",&c[i]);
   for(i=0;i<N;i++) {
    for(j=0;j<N;j++)
        if(c[i]>=c[j])
          max=c[i]; }
  for(i=0;i<N;i++) {
      for(j=0;i<N;j++) {
          if (c[i]<=c[j])
          min=c[i]; } }
   swap=min+max;
  max=swap-min;
  min=swap-max;
  for(i=0;i<N;i++) {
  printf("%d ",c[i]); }
    printf("end");
    return 0; }