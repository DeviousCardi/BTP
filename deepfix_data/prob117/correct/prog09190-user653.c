#include <stdio.h>
#include <stdlib.h>
int srch(int arr[],int start,int end,int k){
    int mid=(start+end)/2;
    if(k==mid) return 1;
    else if(k<mid) return srch(arr,start,mid,k);
    else return srch(arr,mid,end,k);
    return 0; }
int main() {
	return 0; }