#include <stdio.h>
#include <stdlib.h>
int arr[15];
void catalan(int num) {
    if(num==0) {
        arr[0]=1;
        return; }
    else if(num<16) {
        catalan(num-1); }
    int i;
    for(i=0;i<num;i++) {
        arr[num]+=arr[i]*arr[num-i-1]; }
    return; }
int arrsum(int k) {
    int i,sum=0;
    for(i=0;i<k;i++) {
        sum+=arr[i]; }
    return sum; }
int main() {
	int t,x;
	scanf("%d",&t);
	for(x=0;x<t;x++) {
	    int k;
	    scanf("%d",&k);
	    catalan(k);
	    printf("%d\n",arrsum(k)); }
	return 0; }