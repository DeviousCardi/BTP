#include <stdio.h>
int main() {
	int n,a[30],i,j,count;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",a[i]); }
	for(i=0;i<n;i++){
	    for(j=1;j<n;j++){
	    if(a[i]=a[j]){
	        count++; }
	       else{
	           count=0; } } }
	count=0?printf("NO"):printf("YES")
	return 0; }