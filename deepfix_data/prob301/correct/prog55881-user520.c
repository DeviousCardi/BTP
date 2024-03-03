#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n, i, j=0,ans_freq, ans_loc, ans;
	long int arr[10000], count[10000];
	count[0]=1;
	scanf("%ld", &n);
	for(i=0;i<n;i++)
	{scanf("%ld", &arr[i]);}
	for(i=1;i<n;i++) {
	    if(arr[i]==arr[i-1])
	    count[j]=count[j]+1;
	    else {
	        j=j+1;
	        count[j]=count[j]+1; } }
	ans_freq=count[9999];
	for(i=9999;i>=0;i--) {
	    if(count[i]>ans_freq) {
	        ans_loc=0;
	        ans_freq=count[i];
	        for(j=0;j<i;j++) {
	            ans_loc=ans_loc+count[j]; } }
	    else
	    continue; }
	printf("%ld", ans);
	return 0; }