#include <stdio.h>
int main() {
	int N,i,j;
	int arr[49];
	for(i=0;i<N;i++){
	    scanf("%d",&arr[i]); }
	for(i=0;i<N;i++){
	    for(j=i+1;j<N;j++){
	        if(arr[i]=arr[j]) break; } }
	if(i=N) printf("NO");
	else printf("YES");
	return 0; }