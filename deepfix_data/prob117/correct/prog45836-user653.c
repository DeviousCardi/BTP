#include <stdio.h>
#include <stdlib.h>
int tohanoi(int n){
  if(n==0) return 0;
  return 2*tohanoi(n-1)+1; }
int srch(long int arr[],int start,int end,int k){
    if(start>end) return 0;
    int mid=(start+end)/2;
    if(k==arr[mid]) return 1;
    else if(k<arr[mid]) return srch(arr,start,mid-1,k);
    else return srch(arr,mid+1,end,k);
    return 0; }
int main() {
	int len=23;
	long int toh[len];
	int i;
	for(i=0;i<len;i++){
	    toh[i]=tohanoi(i); }
	printf("%ld",toh[len-1]);
	int t;
	scanf("%d",&t);
	long int k;
	for(i=0;i<t;i++){
	  scanf("%ld",&k);
	  if(srch(toh,0,len,k)) printf("yes\n");
	  else printf("no\n"); }
	return 0; }