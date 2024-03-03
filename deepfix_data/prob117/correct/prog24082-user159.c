#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int  toh(int n) {
  if(n==1)
 return 1;
 else
 return 2*toh(n-1)+1; }
int main() {
	int t,i,n,k[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
    for(i=0;i<t;i++) {
        for(n=0;;n++) {
if(toh(n)==k[i]) { printf("yes\n"); break;}
if(toh(n)>k[i]) { printf("no\n"); break;} } }
	return 0; }