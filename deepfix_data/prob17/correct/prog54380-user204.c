#include <stdio.h>
int main() {
	int n1,n2,k,i,j;
	scanf("%d",&n1);
	int arr1[n1];
	for(i=0;i<n1;i++){
	    scanf("%d",&arr1[i]); }
	scanf("%d",&n2);
	int arr2[n2];
		for(i=0;i<n2;i++){
	    scanf("%d",&arr2[i]); }
    for(i=0;i<n1;i++) {
	    if(arr2[0]==arr1[i]) {
	    for(j=1;j<n2;j++) {
	        if(arr2[j]!=arr1[i+j]){
	        printf("NO");
	        return 0; }
	        else printf("YES"); } } }
	return 0; }