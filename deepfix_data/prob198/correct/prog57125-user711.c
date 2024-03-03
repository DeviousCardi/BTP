#include <stdio.h>
int main(){
	int arr1[20],arr2[20],n1,n2,i,j,temp,x;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++){
	    scanf("%d\n",&arr1[i]); }
	scanf("%d\n",&n2);
	for(j=0;j<n2;j++){
	    scanf("%d\n",&arr2[j]); }
	x=n1-1;
	for(i=0;i<n1;i++){
	    for(j=0;j<=x;j++){
	        temp=0;
	        if(arr1[j+1]<arr1[j]){
	            temp=arr1[j+1];
	            arr1[j+1]=arr1[j];
	            arr1[j]=temp; }
	        else{
	            continue; } }
	    x-=1; }
	printf("%d",arr1[0]);
	return 0; }