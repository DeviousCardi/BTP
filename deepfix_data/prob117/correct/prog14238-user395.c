#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    int val;
    if(n<=1) return 1;
    else val=2*hanoi(n-1)+1;
    return val; }
int main() {
	  int i,j,t,k,arr[25];
	  scanf("%d\n",&t);
	  for(i=0;i<t;i++) {
	    scanf("%d\n",&arr[i]); }
	  for(i=0;i<t;i++) {
	    int flag=0;
	   for(j=0;j<20;j++) {
     	  if(arr[i]==hanoi(j))
     	  flag=1; }
	    if(flag==1)printf("yes\n");
	    else printf("no\n"); }
	return 0; }