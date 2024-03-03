#include <stdio.h>
int main() {
	int n,a[50],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
		for(i=0;i<n-1;i++){
	        for(j=i+1;j<n;j++){
	            if(a[i]==a[j]){
	             count=1;
	             break; } } }
	if(count==1)
	printf("YES");
	else
	printf("NO");
	return 0; }