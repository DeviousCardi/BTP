#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi(int t) {
    if(t==1) {
        count++;
      return 1; }
    else {
        count++;
        return (2 * hanoi(t-1)) + 1; } }
int main() {
	int t,k[100],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 scanf("%d",&k[i]);
	 for(i=0;i<t;i++) { }
	for(i=0;i<t;i++) {
	    hanoi(i);
	    if(k[i]==count)
	     printf("yes\n");
	    else
	     printf("no\n"); }
	return 0; }