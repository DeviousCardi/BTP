#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi(int t) {
    int a;
    if(t==1||t==0) {
      a= 1; }
    else {
        if(t>1) {
          a = (2 * hanoi(t-1)) + 1; } }
    printf("%d ",a);
   return a; }
int main() {
	int t,k[100],i,n=0,j;
	hanoi(20);
	scanf("%d",&t);
	for(i=0;i<t;i++)
	 scanf("%d",&k[i]);
	return 0; }