#include <stdio.h>
int main() {
	int n,a[30],i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0,j=1;i<n-1,j<n;i++){
	    if(a[i]=a[j]){
	        count++;
	        break; }
	      else
	      continue; }
	count=0?printf("NO"):printf("YES");
	return 0; }