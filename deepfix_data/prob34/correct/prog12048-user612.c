#include <stdio.h>
#include <stdlib.h>
int max(int a,int b,int c) {
    if((a>b)&&(a>c))
    return a;
    if((c>b)&&(c>a))
    return c;
    if((b>c)&&(b>a))
    return b; }
int main() {
	int i,j,t,p,n;
	scanf("%d",&n);
    int arr[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&p);
	    arr[i]=p; }
	scanf("%d",&t);
	int tes[t];
	for(j=0;j<t;j++) {
	    scanf("%d",&p);
	    tes[j]=p; }
	for(j=0;j<t;j++) {
	    p=tes[j];
	    if(arr[p]==max(arr[p],arr[p-1],arr[p+1]))
	    printf("Yes");
	    else
	    printf("No"); }
	return 0; }