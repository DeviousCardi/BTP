#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2); }
int binsearch(int a[],int start,int end,int key) {
    int mid=(start+end)/2;
    if(start>end)
        return 0;
    else if(a[mid]==key)
        return 1;
    else if(a[mid]>key)
        return binsearch(a,start,mid-1,key);
    else
        return binsearch(a,mid+1,end,key); }
int main() {
    int a[20];
    int t,k,i;
    for(i=0;i<=19;i++) {
        a[i]=fib(i); }
	scanf("%d",&t);
	scanf("%d",&k);
	for(i=1;i<=t;i++) {
	    if(binsearch(a,0,19,k)==1)
	        printf("yes\n");
	    else
	        printf("no\n");
	    if(i!=t)
	        scanf("%d",&k); }
	return 0; }