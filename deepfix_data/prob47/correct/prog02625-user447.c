#include <stdio.h>
#include <stdlib.h>
void catalan(int n,int arr[15]) {
    int i;
    arr[0]=1;
    if(n==0 || n==1) return 1;
    for(i=1;i<n;i++) {
        arr[i]=(arr[i-1]*(2*i-1)*2)/(i+1); } }
int main() {
	int t,i,b,a,arr[15],sum=0;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a);
	    catalan(a,arr);
	    for(b=0;b<=a;b++)
	    sum=sum+arr[b]; }
	return 0; }