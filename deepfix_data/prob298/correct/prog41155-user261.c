#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
    return 1;
    return cat(n-1)*2*(2*n-1)/(n+1); }
int search(int n,int catalan[17]) {
    int start=0,end=16,mid;
    while(start<=end) {
        mid=(start+end)/2;
        if(catalan[mid]>n)
        {end=mid-1;continue;}
        else if(catalan[mid]<n)
        {start=mid+1;continue;}
        else if(catalan[mid]==n)
        return 1; }
    return 0; }
int main() {
	int t;
	int ar[17],catalan[17];
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++) {
	    scanf("%d",&ar[i]); }
	for(i=0;i<17;i++) {
	    catalan[i]=cat(i); }
	for(i=0;i<t;i++) {
	    if(search(ar[i],catalan))
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }