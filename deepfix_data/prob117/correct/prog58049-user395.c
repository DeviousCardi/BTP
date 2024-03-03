#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    int val;
    if(n<=1) return 1;
    else val=2*hanoi(n-1)+1;
    return val; }
int main() {
	  int i,t,k,arr[25];
	  scanf("%d\n",&t);
	  for(i=0;i<t;i++) {
	    scanf("%d\n",&arr[i]);
	    printf("%d\n",arr[i]); }
	    int flag=0;
	   for(i=0;i<5;i++) {
     	  if(k==hanoi(i))
     	  flag=1; }
	   if(flag)printf("yes\n");
	   else printf("no\n");
	return 0; }