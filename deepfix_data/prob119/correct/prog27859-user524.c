#include <stdio.h>
#include <stdlib.h>
  int p(int k){
  if(k==0)
  return 0;
  if (k==1)
  return 1;
  else
  return p((k*2)+ 1); }
int main() {
	int t,n,i,a[100];
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&n);
	    if( a[i]== p);
	    printf("%d\n",a[i]); }
	return 0; }