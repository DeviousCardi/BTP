#include <stdio.h>
int main() {
	int N,i,j;
	int arr[49];
	scanf("%d\n",&N);
	for(i=0;i<N;i++){
	    scanf("%d",&arr[i]); }
	for(i=0;i<N;i++){
	    for(j=i+1;j<N;j++){
	        if(arr[i]==arr[j]) break; }
	    if(arr[i]==arr[j]) break; }
	printf("%d %d\n",i,j);
	if(i==N) printf("NO");
	else printf("YES");
	return 0; }