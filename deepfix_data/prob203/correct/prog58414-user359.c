#include <stdio.h>
int main() {
	int n,a[50],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
		for(i=0;i<n-1;i++){
	        for(j=i+1;j<n;j++){
	            if(a[i]==a[j]){
	             count++;
	             break; } } }
	if(count==0)
	printf("NO");
	else
	printf("YES");
	return 0; }