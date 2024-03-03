#include <stdio.h>
#include <stdlib.h>
int main() {
	int t,i,k;
	int catalan(int k){
    if(k==1)
        {return 1;}
    return ((2*(2*k-1)*catalan(k-1))/(k+1)); }
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    printf("%d\n",catalan(k-1)); }
	return 0; }