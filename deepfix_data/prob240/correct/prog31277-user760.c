#include <stdio.h>
#include <stdlib.h>
int catalan(int k){
    if(k==1)
        {return 1;}
    return ((2*(2*k-1)*catalan(k-1))/(k+1)); }
int main() {
	int t,i,k,j,cat=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    for(j=1;;j++){
	    if(catalan(j)>=k)
	     break;
	    cat = catalan(j); }
	    printf("%d\n",cat); }
	return 0; }