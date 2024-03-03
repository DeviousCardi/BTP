#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi(int t,int a,int c,int b) {
    if(t==1) {
        count++;
      return 1; }
    else {
        count++;
        return hanoi(t-1,b,c,a); } }
int main() {
	int t,k[100],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 scanf("%d",&k[i]);
	for(i=0;i<t;i++) {
	    if(k[i]==count)
	     printf("yes");
	    else
	     printf("no"); }
	return 0; }