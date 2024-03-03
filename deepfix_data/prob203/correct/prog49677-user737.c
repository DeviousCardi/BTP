#include <stdio.h>
int main() {
	int N,i,k;
	scanf("%d",&N);
	int arr[N];
	for(i=0;i<N;i++) {
	    scanf("%d",&arr[i]); }
	for(i=0;i<N;i++) {
	    for(k=i+1;k<N;k++) {
	        if(arr[k]==arr[i])
	        break; }
	    if(k!=N)
	   { printf("YES");
	    break;} }
	if(k==N)
	printf("NO");
	return 0; }