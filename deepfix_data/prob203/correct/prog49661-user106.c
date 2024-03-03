#include <stdio.h>
int main() {
	int j,i,N;
	scanf("%d",&N);
	int arr[N];
	for(i=0;i<N;i++) {
	scanf("%d ",&arr[i]);
	  for(j=0;j<=i;j++) {
	  if(arr[i]==arr[j])
	     printf("YES");
	  else
	     printf("NO"); } }
	return 0; }