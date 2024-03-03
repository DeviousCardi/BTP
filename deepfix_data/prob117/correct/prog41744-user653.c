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
	int test[]={1,4,7,9,23,56,89,128,1476,2233};
	printf("%d ",srch(test,0,9,128));
	return 0; }