#include <stdio.h>
int main() {
	int n,a[30],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
		for(i=0;i<n;i++){
	        for(j=i+i;j<n;j++){
	            if(a[i]==a[j]){
	             count++;
	             break; } } }
	count==0?printf("NO"):printf("YES");
	return 0; }