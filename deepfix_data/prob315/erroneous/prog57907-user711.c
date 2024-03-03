#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[1000],arr[1000],sum,j,i,n,count=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	    sum=0;
	    for(j=i+1;j<n;j++){
	        if(a[j]<a[i]){
	            count+=1;
	            sum+=1; } }
	    arr[i]=sum; }
	printf("%d\n",count);
	for(k=0;k<n;k++){
	    printf("%d",arr[k]); }
	return 0; }