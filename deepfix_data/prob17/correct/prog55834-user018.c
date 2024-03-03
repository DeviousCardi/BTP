#include <stdio.h>
int main() {
	int n1,n2,i,j,a,flag=0;
	scanf("%d",&n1);
	int arr1[n1];
	for(i=0;i<n1;i++){
	    scanf("%d ",&arr1[i]); }
	scanf("%d",&n2);
	int arr2[n2];
	for(i=0;i<n2;i++){
	    scanf("%d ",&arr2[i]); }
	j=0;
	j=0;
    a=arr2[j];
    for(i=0;i<n1;i++){
        if(arr1[i]==a){
            if(j<(n2-1)){
                j++;
                a=arr2[j]; }
            else if(j==(n2-1)){
                flag=1;
                break; } }
        else{
            j=0;
            a=arr2[j]; } }
    if(flag==1){
        printf("\nYES"); }
    else {
        printf("\nNO"); }
	return 0; }