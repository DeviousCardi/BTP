#include <stdio.h>
#include <stdlib.h>
int srch(int arr[],int start,int end,int k){
    int mid=(start+end)/2;
    if(k==arr[mid]) return 1;
    else if(k<mid) return srch(arr,start,mid,k);
    else return srch(arr,mid,end,k);
    return 0; }
int main() {
	int test[5]={1,2,4,7,9};
	printf("%d ",srch(test,0,4,7));
	return 0; }