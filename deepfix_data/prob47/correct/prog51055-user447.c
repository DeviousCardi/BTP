#include <stdio.h>
#include <stdlib.h>
void catalan(int arr[15]) {
    int i;
    arr[0]=1;
    for(i=1;i<15;i++) {
        arr[i]=(arr[i-1]*(2*i-1)*2)/(i+1); } }
int main() {
	int t,i,b,a,arr[15],sum=0;
	scanf("%d",&t);
	catalan(arr);
	for(i=0;i<t;i++) {
	    scanf("%d",&a);
	    for(b=0;b<a;b++)
	    sum=sum+arr[b];
	    printf("%d\n",sum); }
	return 0; }