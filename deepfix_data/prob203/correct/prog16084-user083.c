#include <stdio.h>
int main() {
	int n,i,j,k;
	scanf("%d\n",&n);
	int arr[n];
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]); }
	for(i=0;i<n;i++){
	    k=0;
	    for(j=n-1;j>=1;j--){
	        if((arr[i]==arr[j])&&(i!=j))
	        k=k+1; } }
	if(k>0)
	printf("YES");
	else
	printf("NO");
	return 0; }