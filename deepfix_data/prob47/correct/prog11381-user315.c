#include <stdio.h>
#include <stdlib.h>
int catalan(int k){
    if(k==0)  return 0;
    else if(k==1)   return 1;
    else if(k>1)
        return 3*catalan(k-1)-1; }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    printf("%d\n",catalan(k)); }
	return 0; }