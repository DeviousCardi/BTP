#include <stdio.h>
#include <stdlib.h>
long int no_of_steps(int n) {
    if(n==0) return 0;
    return 2*(no_of_steps(n)-1)+1; }
int main() {
	int i,t,j;
	scanf("%d",&t);
	for(j=1;j<=t;j++) {
	  int flag=0;
	  long int k;
	  scanf("%ld",&k);
	  for(i=0;i<=23;i++) {
	    if(no_of_steps(i)==k)
	    flag=1; }
	 if(flag==1)
	 printf("yes\n");
	 else printf("no\n"); }
	return 0; }