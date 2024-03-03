#include <stdio.h>
#include <stdlib.h>
int moves(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return 2*moves(n-1) +1; }
int main() {
	int t,i,j,count=0;
	scanf("%d/n",&t);
	int a[18];
	for(i=0;i<t;i++) {
	    scanf("%d ",& a[i]); }
	for(i=0;i<t;i++) {
	    count=0;
	    for(j=0;j<500;j++) {
	         if( a[i]==moves(j)) {
	              printf("yes\n");
	              break; }
	          else {
	              count ++; } }
	     if(count== 500)
	     printf("no\n"); }
	return 0; }