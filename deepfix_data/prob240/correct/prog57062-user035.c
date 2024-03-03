#include <stdio.h>
#include <stdlib.h>
int arr[20];
void catalan(int num) {
    int i;
    if(num==0) {
        arr[0]=1;
        return; }
    else if(num<20) {
     catalan(num-1); }
    for(i=0;i<num;i++) {
        arr[num]+=arr[i]*arr[num-i-1]; }
    return ; }
int main() {
	int t,i,j,num;
	scanf("%d",&t);
	catalan(19);
	for(i=0;i<t;i++) {
	    scanf("%d",&num);
	    for(j=1;j<20;j++) {
	        if(arr[j-1]<num&&arr[j]>=num) {
	            printf("%d\n",arr[j-1]);
	            break; } } }
	return 0; }