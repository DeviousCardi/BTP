#include <stdio.h>
#include <stdlib.h>
int main() {
	                  int b,n,N,a[N],S,i,j;
	                  scanf("%d",&N);
	                  j=0;
	                  for (i=1;i<=N;i++) {
	                      scanf("%d",&a[n]);
	                      scanf("%d",&S);
	                      if (a[i] + a[i-1] == S)  {
	                          printf("(%d,%d)\n",a[i],a[i+1]); }
	                      if (a[N] + a[N-1] == S) {
	                          printf("(%d,%d)\n",a[i-1],a[i]); } }
	return 0; }