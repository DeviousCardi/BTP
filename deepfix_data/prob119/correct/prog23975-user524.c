#include <stdio.h>
#include <stdlib.h>
  int p(int k){
  if(k==0)
  return 0;
  else
  return k; }
int main() {
	int t,n,i,k;
    k=1;
	scanf("%d\n",&t);
	for(i=2;i<t;i++){
	    scanf("%d\n",&n);
	    k= (k*2)+1;
	    printf("%d\n",k); }
	return 0; }