#include <stdio.h>
#include <stdlib.h>
void func(int n,int array[25]) {
    if(n==0) {
        array[n]=1; }
    else {
        func(n-1,array);
        array[n]=2*array[n-1]+1; } }
int main() {
	int n,i,j,x;
    int array[25];
	scanf("%d",&n);
	if(n==0) printf("no");else{
	int arr[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	func(25,array);
	for(i=0;i<n;i++) {
	    x=-1;
	    for(j=0;j<25;j++) {
	        if(array[j]==arr[i]) {
	            x++; } }
	    if(x>=0) printf("yes\n");
	    else printf("no\n"); } }
	return 0; }