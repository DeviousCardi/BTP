#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    int k;
    if(n==1) return 1;
    else if (n<=0) return 0;
    else k=2*hanoi(n-1)+1;
    return k; }
int main() {
	  int i,j,t,arr[25];
	  scanf("%d\n",&t);
	  for(i=0;i<t;i++) {
	    scanf("%d\n",&arr[i]); }
	  for(i=0;i<t;i++) {
	    int flag=0;
	   for(j=0;j<25;j++) {
     	  if(arr[i]==hanoi(j))
     	  flag=1; }
	    if(flag==1)printf("yes\n");
	    else printf("no\n"); }
	return 0; }