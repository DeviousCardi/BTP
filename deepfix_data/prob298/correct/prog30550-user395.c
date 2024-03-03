#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int val;
    if(n==0)return 1;
    val=catalan(n-1)*2*(2*n-1)/(n+1);
    return val; }
int main() {
	int k,i,j,arr[20];
	scanf("%d",&k);
	for(i=0;i<k;i++) {
	    scanf("%d\n",&arr[i]); }
   for(i=0;i<k;i++) {
	     int flag=0;
	     for (j=0;j<17;j++) {
	        if(arr[i]==catalan(j)) {
	          flag=1; } }
	     if(flag)
	        printf("yes\n");
	     else printf("no\n"); }
	return 0; }