#include <stdio.h>
#include <stdlib.h>
int members(int n, long int a[]);
int search(long int a[], int key, int start, int end);
int members(int n, long int a[]) {
    if(n==1) { return 1; a[1]=1; a[0]=0;}
    else {
		a[n]=2*members(n-1, a);
		return a[n]; } }
int search(long int a[], int key, int start, int end) {
    if(start>end) return 0;
	int mid=(start+end)/2;
	if(a[start]==key) return 1;
	if(a[mid]>key) return search(a, key, start, mid);
	if(a[mid]<key) return search(a, key, mid+1, end); }
int main() {
    int i=0, key=0, grbg=0;
	long int  a[25];
	grbg=members(25, a);
	for(i=0;i<25;i++)
	printf("a[%d] is %ld \n", i, a[i]-1);
	return 0; }