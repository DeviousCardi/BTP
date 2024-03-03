#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[100];
	int arrt[100];
	int i,n,t,j;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&arr[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j=j+1) {
	    scanf("%d",&arrt[j]); }
	for(j=0;j<t;j=j+1) {
	    if((arr[arrt[j]]<arr[arrt[j]+1]) && (arr[arrt[j]]<arr[arrt[j]-1]))
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	return 0; }