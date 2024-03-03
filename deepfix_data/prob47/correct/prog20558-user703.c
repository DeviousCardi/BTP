#include <stdio.h>
#include <stdlib.h>
int catalan(int k){
    if(k==0)return 1;
    return (2*(2*k-1)*catalan(k-1))/(k+1); }
int main() {
	int t,i,k,j;
	scanf("%d",&t);
    printf("%d",catalan(3));
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    int sum=0;
	    for(j=0;j<k;j++){
	        sum = sum + catalan(j); }
	    printf("%d\n",sum); }
	return 0; }