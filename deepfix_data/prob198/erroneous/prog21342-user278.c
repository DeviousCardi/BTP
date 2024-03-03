#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2;
    scanf("%d\n",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++) {
        scanf("%d\n".&arr1[i]); }
	scanf("%d\n",&n2);
	int arr2[n2];
	for(int i=0;i<n2;i++) {
	    scanf("%d\n",&arr2[i]); }
	for(int i=0;i<n1;i++) {
	    int min=arr1[i];
	    int k=i;
	    for(int j=i+1;j<n1;j++) {
	        if(arr1[j]<arr1[i]) {
	            min=arr1[j];
	            k=j; } }
	    if(k!=i) {
	        int tmp=arr[i];
	        arr[i]=min;
	        arr[k]=tmp; } }
	int got=0;
	for(int i=0;i<n1;i++) {
	    int m=0;
	    for(int j=0;j<n2;j++) {
	        if(arr1[i]==arr2[j]) {
	            m=1; } }
	    if(m==0) {
	        printf("%d",arr1[i]);
	        got=1;
	        break; } }
	if(got==0) {
	    printf("NO"); }
	return 0; }