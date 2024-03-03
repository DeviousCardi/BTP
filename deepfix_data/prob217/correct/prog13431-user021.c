#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,s,i,m,j,t,k;
	int arr[10000],out[10000];
	scanf("%d\n",&N);
	for(t=0;t<N;t++){
	    scanf("%d",&arr[t]); }
	scanf("\n%d",&s);
	for(i=0;i<N;i++){
	    m=s-arr[i];
	    for(j=0;j<N && j!=i;j++){
	        if(m==arr[j]){
	            out[i]=arr[j];
	            break; }
	        else{
	            continue; } }
	    if(m==out[i]){
	        printf("(%d,%d)\n",out[i],arr[i]); } }
	return 0; }