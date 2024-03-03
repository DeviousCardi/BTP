#include <stdio.h>
int main() {
	int i,N;
	scanf("%d",&N);
	int arr[N];
	int flag=0;
	for(i=0;i<N;i++) {
	    scanf("%d ",&arr[i]);
	    for(int j=0;j<i;j++) {
	        if(arr[i]==arr[j]) {
	        flag=1; } } }
	if(flag==1)
	    printf("YES");
	else
	    printf("NO");
	return 0; }