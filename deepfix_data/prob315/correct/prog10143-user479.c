#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int arr[n] , temp[n] , count = 0 ;
	for(int i = 0 ; i< n ; i++){
	    scanf("%d",&arr[i]); }
	for(int k =0 ; k < n ; k++) {
	    temp[k] = 0;
	    for( int j = 0 ; j < n ; j++){
	        if( k != j){
	            if( arr[k] > arr[j] && j > k  ){
	                temp[k] ++;
	                count ++ ; } } } }
	printf("%d \n",count);
	for(int i = 0 ; i < n ; i++)
	    printf("%d ",temp[i]);
	return 0; }