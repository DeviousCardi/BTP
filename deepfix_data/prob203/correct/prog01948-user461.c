#include <stdio.h>
int main() {
	int N,flag=0;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;++i)
	    scanf("%d ",&arr[i]);
	for(int i=0;i<N-1;i++) {
	       for(int j=i+1;j<N;j++) {
	               if(arr[i]==arr[j]) {
	                     flag=1;
	                     break; } }
	        if(flag==1)break; }
	    if(flag==1)printf("YES");
	    else printf("NO");
	return 0; }