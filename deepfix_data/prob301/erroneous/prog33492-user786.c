#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,m,cnt,p,result,ans;
	scanf("%d",&n);
	int arr[n];
	int arr1[n];
	for(i=1;i<n;i++){
	    scanf("%d",&arr[i]); }
	for(j=0;j<n;j++){
	       cnt=0;
	       for(m=j-1;m>=0;m--){
	           if(arr[j]==arr[m]){cnt++;} }
	       if(cnt>0){arr1[j]=0;continue;}
	    int count=0;
	    for(k=j;k<n;k++){
	        if(arr[j]==arr[k]){count++;} }
	    arr1[j]=count; }
	int max=-999;
	for(p=0;p<n;p++){
	    if (arr1[p]>=max){
	    max=arr1[p];
	    result=p;} }
	    arr[result]=ans
	printf("%d",ans);
	return 0; }