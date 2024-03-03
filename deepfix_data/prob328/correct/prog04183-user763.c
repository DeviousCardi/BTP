#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0||n==1)
    return n;
    else
    return fib(n-1)+fib(n-2); }
int search(int a[],int start,int end,int key) {
    int mid;
    if(start>end)
    return 0;
    mid=start+end/2;
    if(a[mid]==key)
    return 1;
    if(a[mid]>key)
    search(a,start,mid-1,key);
    else
    search(a,mid+1,end,key); }
int main() {
	int i,j,k,t,f[19];
	scanf("%d\n",&t);
	for(j=0;j<19;j++) {
	    f[j]=fib(j); }
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    printf("%d",k);
	    if(search(f,0,19,k))
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }