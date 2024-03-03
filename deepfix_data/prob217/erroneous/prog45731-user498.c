#include <stdio.h>
#include <stdlib.h>
int main()
{ int n,i,s;
  int A[10000];
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;++i) {
         scanf("%d",&A[i]); }
   scanf("%d",s);
   for(i=0;i<n;i++) {
           a=A[i];
          for(j=0;j<n;++j) {
                if (A[j]==(s-a)) {
                     printf("(%d,%d)",a,A[i]);
                     break; } } }
	return 0; }