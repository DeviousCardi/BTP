#include <stdio.h>
#include <stdlib.h>
int hanoi(int t) {
    int a;
    if(t==1) {
      a= 1; }
    else {
        if(t>1) {
          a= (2 * hanoi(t-1)) + 1; } }
    printf("%d\n",a);
   return a; }
int main() {
	int t,k[100],i,a,n=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    a=hanoi(i);
	    if(k[i]==a)
	     n=1; }
	if(a==1)
	 printf("yes\n");
	else
	 printf("no\n");
	return 0; }