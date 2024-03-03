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
	long int toh[27];
	int i;
	for(i=0;i<27;i++){
	    toh[i]=tohanoi(i); }
	printf("%ld",toh[27]);
	int t;
	scanf("%d",&t);
	long int k;
	for(i=0;i<t;i++){
	  scanf("%ld",&k);
	  if(srch(toh,0,27,k)) printf("yes\n");
	  else printf("no\n"); }
	return 0; }