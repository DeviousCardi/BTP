#include <stdio.h>
#include <stdlib.h>
int srch(int arr[],int start,int end,int k){
    if(start>end) return 0;
    int mid=(start+end)/2;
    if(k==arr[mid]) return 1;
    else if(k<arr[mid]) return srch(arr,start,mid-1,k);
    else return srch(arr,mid+1,end,k);
    return 0; }
int main() {
	long int toh[23];
	int t,i;
	long int k; }
	return 0; }