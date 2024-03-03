#include <stdio.h>
#include <stdlib.h>
int members(int n, long int a[]);
int search(long int a[], int key, int start, int end, int n);
int members(int n, long int a[]) {
    if(n==1) { return 1; a[1]=1; a[0]=0;}
    else {
		a[n]=2*members(n-1, a);
		return a[n]; } }
int search(long int a[], int key, int start, int end, int n) {
	int mid=n/2;
	if(a[start]==key) return 1;
	return search(a, key, start, start + mid,  )
int main() {
    int i=0, key=0, grbg=0;
	long int  a[25];
	grbg=members(25, a);
	for(i=0;i<25;i++)
	printf("a[%d] is %d \n", i, a[i]-1);
	return 0; }