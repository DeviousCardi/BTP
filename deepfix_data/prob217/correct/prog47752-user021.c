#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,s,i,m,j,t;
	int arr[10000];
	scanf("%d\n",&N);
	for(t=0;t<N;t++){
	    scanf("%d",&arr[i]); }
	scanf("\n%d",&s);
	for(i=0;i<N;i++){
	    m=s-arr[i];
	    for(j=0;j<N;j++){
	        if(m==arr[j]){
	            printf("(arr[i],arr[j)");
	            break; }
	        else{
	            continue; } } }
	return 0; }