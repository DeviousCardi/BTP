#include <stdio.h>
#include <stdlib.h>
int rec(int frst,int sec ,int k) {
  int thrd = frst + sec;
  if(k==thrd)
  return 1;
  else if(thrd>k)
  return 0;
  else return rec(sec,thrd,k); }
int main() {
	int k,t;
	scanf("%d",&t)
	while(t--) {
	scanf("%d",&k);
	if(k==1||k==0) {
	    printf("yes");
	    return 0; }
	int res = rec(0,1,k);
	if(res)
	printf("yes");
	else
	printf("no"); }
	return 0; }