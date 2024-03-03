#include <stdio.h>
#include <stdlib.h>
int fab(int k) {
    if(k==0) {
        return 0; }
    else if(k==1) {
        return 1; }
    else {
        return(fab(k-1)+fab(k-2)); } }
int main() {
	int t;
	scanf("%d",&t);
	int arr[20];
	int i;
	for(i=0;i<t;i++) {
	    scanf("\n%d",&arr[i]); }
	printf("%d",fab(arr[0]));
	for(i=1;i<t;i++) {
	    printf("\n%d",fab(arr[i])); }
	return 0; }