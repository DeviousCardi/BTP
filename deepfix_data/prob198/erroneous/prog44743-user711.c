#include <stdio.h>
int main(){
	int arr1[20],arr2[20],n1,n2,i,j,min,h;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++){
	    scanf("%d\n",&arr1[i]); }
	scanf("%d\n",&n2);
	for(j=0;j<n2;j++){
	    scanf("%d\n",&arr2[j]); }
	min=arr1[0];
	i=0;
	while(i<n1){
	    if(min>=arr1[i]){
	        min=arr1[i]; }
	    else{
	        i+=1; } }
	j=0;
	while(j<n2){
	    if(arr2[j]!=min){
	        h=0; }
	    else{
	        j+=1; } }
	if(h==0){
	    printf("%d",min); }
	return 0; }
	return 0; }