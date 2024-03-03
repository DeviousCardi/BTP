#include <stdio.h>
#include <stdlib.h>
int arr[15],arr_sum[15];
void catalan(int num) {
    if(num==0) {
        arr[0]=1;
        arr_sum[0]=1;
        return; }
    if(num==1) {
        arr[1]=1;
        return; }
    else if(num<16) {
        catalan(num-1); }
    int i;
    for(i=0;i<num;i++) {
        arr[num]=arr[num]+arr[i]*arr[num-i-1]; }
    arr_sum[num]=arr[num]+arr_sum[num-1];
    return; }
int main() {
	int t,x;
	scanf("%d",&t);
	for(x=0;x<t;x++) {
	    int k;
	    scanf("%d",&k);
	    catalan(k);
	    printf("%d\n",arr_sum[k-1]); }
	return 0; }