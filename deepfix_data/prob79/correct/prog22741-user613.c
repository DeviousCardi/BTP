#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,cout1=0,cout2=0;
	int sum1,sum2,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
	    sum1=0,sum2=0;
	    for(j=0;j<cout1;j++){
	        sum1+=arr[j]; }
	    for(j=0;j<cout2;j++){
	        sum2+=arr[n-1-j]; }
	    if(sum1>sum2)
	    cout2++;
	    if(sum2>sum1)
	    cout1++;
	    else{
	        cout1++;
	        cout2++; }
	    if(cout1+cout2==n)
	    break; }
	printf("%d  %d",cout1,cout2);
	return 0; }