#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	  if(A[0]<A[1]){printf("Yes");}
	  else if(A[n-1]<A[n-2]){printf("No");}
	  else
	  for(i=1;i<(n-1);i++)
	  {while(A[i]<A[i-1] && A[i]<A[i+1]){printf("Yes");}}
	return 0; }