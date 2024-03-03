#include <stdio.h>
#include <stdlib.h>
int ctln(int n)
{  int ans=0,i;
   if(n==0)
  return 1;
  for(i=0;i<n;i++) {
      ans=ans+ctln(i)*ctln(n-i-1); }
  return ans; }
int main() {
	int k,a,i,j,n;
	scanf("%d",&n)
	for(j=0;j<n;j++) {
	    a=0;
	    scanf("%d",&k);
	 for(i=0;i<16;i++) {
	     if(k==ctln(i)) {
	   a++;
	   break; } }
	 if(a==1)
	 printf("yes\n");
	 else
	 printf("no\n"); }
	return 0; }