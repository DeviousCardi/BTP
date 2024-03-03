#include <stdio.h>
#include <stdlib.h>
void func(int n) {
    if(n==0) {
        array[n]=1; }
    else {
        array[n-1]=func(n-1);
        array[n]=2*array[n-1]+1; } }
int main() {
	int n,i;
    int array[2500000];
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	func(n);
	return 0; }