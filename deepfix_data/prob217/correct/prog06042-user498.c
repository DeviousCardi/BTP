#include <stdio.h>
#include <stdlib.h>
int main()
{ int n,i,s,a,j;
  int A[10000];
  scanf("%d",&n);
  for(i=0;i<n;++i) {
         scanf("%d",&A[i]); }
   scanf("%d",&s);
      for(i=0;i<n;i++) {
           a=A[i];
          for(j=i+1;j<n;++j) {
                if (A[j]==(s-a)) {
                     printf("(%d,%d)",a,A[j]);
                     printf("\n");
                     break; } } }
	return 0; }