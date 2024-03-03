#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,t,p,n;
	int arr[n],tes[t];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&p);
	    arr[i]=p; }
	scanf("%d",&t)
	for(j=0;j<t;j++) {
	    scanf("%d",&p);
	    tes[j]=p; }
	for(j=0;j<t;j++) {
	    if(arr[tes[j]]%2==0);
	    printf("Yes");
	    else
	    printf("No"); }
	return 0; }